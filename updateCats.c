///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file updateCats.c
/// @version 1.0
///
//// @brief Allows changes to the database given the parameters
/// are valid.
//
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   10 Mar 2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "updateCats.h"
#include "catDatabase.h"
#define PROGRAM_NAME ("updateCats.c")

int updateCatName( int index , char newCatName[] ) {

   if( isUpdatedNameValid( newCatName ) == 1 ) return 1;

   if( isIndexValid( index ) == 1 ) return 1;

   strcpy(catName[index] , newCatName);
   printf("cat at index [%d] has a new name: [%s]\n", index, catName[index]);
   return 0;

}

int fixCat( int index ) {
   
   if( isIndexValid( index ) == 1 ) return 1;

   catFixed[index] = true;    //You can't unfix a cat
   printf("[%s] at index [%d] has been fixed\n", catName[index] , index);
   return 0;

}

int updateCatWeight( int index , double newCatWeight ) {

   if( isUpdatedWeightOk( newCatWeight ) == 1 ) return 1;
   if( isIndexValid( index ) == 1 ) return 1;

   catWeight[index] = newCatWeight;
   printf("[%s] at index [%d] has a new weight of %f\n", catName[index], index, catWeight[index]);
   return 0;

}

int isIndexValid( int index ) {
   if( (index < 0) || (index > numberOfCats - 1) ){
      fprintf( stderr, "%s: Index [%d] does not exist\n", PROGRAM_NAME, index);
      return 1;
   }
   else return 0;
}

int isUpdatedNameValid( char checkName[] ) {
    //check if cat's name is not blank
   if( strlen( checkName ) == 0 ) {
      fprintf( stderr, "Error: updated name is blank\n", PROGRAM_NAME);
      return 1;
   }
   
   //checks if cat's name is shorter than max limit
   if( strlen( checkName ) > CATNAME_CHARLIMIT ) {
      fprintf( stderr, "%s: Entered cat's name is longer than %d characters\n", PROGRAM_NAME, CATNAME_CHARLIMIT);
      return 1;
   }

   //checks for duplicate cat names
   for( int i = 0 ; i < numberOfCats ; i++ ) {
      if( strcmp( checkName , catName[i] ) == 0 ) {
            fprintf( stderr, "%s: \"%s\" conflicts with cat in index [%d] \n", PROGRAM_NAME, checkName, i);
            return 1;
      }
   }
   return 0;
}

int isUpdatedWeightOk( double checkWeight ) {
   if( checkWeight <= 0.0 ){
      fprintf( stderr, "%s: [%f] is an invalid weight \n", PROGRAM_NAME, checkWeight);
      return 1;
   }
   return 0;
}

