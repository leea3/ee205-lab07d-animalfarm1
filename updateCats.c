///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 05d - Animal Farm 0 - EE 205 - Spr 2022
///
/// @file updateCats.c
/// @version 1.0
///
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   21 Feb 2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "updateCats.h"
#include "catDatabase.h"

void updateCatName( int index , char newCatName[] ) {

   isUpdatedNameValid( newCatName );

   strcpy(catName[index] , newCatName);

}

void fixCat( int index ) {
   
   catFixed[index] = true;    //You can't unfix a cat

}

void updateCatWeight( int index , double newCatWeight ) {

   isUpdatedWeightOk( newCatWeight );

   catWeight[index] = newCatWeight;

}


int isUpdatedNameValid( char checkName[] ) {
    //check if cat's name is not blank
   if( strlen( checkName ) == 0 ) {
      printf("Error: updated name is blank\n");
      exit(0);
   }
   
   //checks if cat's name is shorter than max limit
   if( strlen( checkName ) > CATNAME_CHARLIMIT ) {
      printf("Error: updated cat's name is longer than %d characters\n", CATNAME_CHARLIMIT);
      exit(0);
   }

   //checks for duplicate cat names
   for( int i = 0 ; i < numberOfCats ; i++ ) {
      if( strcmp( checkName , catName[i] ) == 0 ) {
            printf("Error: \"%s\" is a duplicate cat name as in index [%d] \n", checkName, i);
            exit(0);
      }
   }
   return 0;
}

int isUpdatedWeightOk( double checkWeight ) {
   if( checkWeight <= 0.0 ){
      printf("Error: updated cat has invalid weight of %f\n", checkWeight);
      exit(0);
   }
   return 0;
}

