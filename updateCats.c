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

int updateCatName( int index , char newCatName[] ) {

   if( isUpdatedNameValid( newCatName ) == 1 ) return 0;

   if( isIndexValid( index ) == 1 ) return 0;

   strcpy(catName[index] , newCatName);
   printf("cat at index [%d] has a new name: [%s]\n", index, catName[index]);
   return 0;

}

int fixCat( int index ) {
   
   if( isIndexValid( index ) == 1 ) return 0;

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
      printf("Error: Index [%d] does not exist\n", index);
      return 1;
   }
   else return 0;
}

int isUpdatedNameValid( char checkName[] ) {
    //check if cat's name is not blank
   if( strlen( checkName ) == 0 ) {
      printf("Error: updated name is blank\n");
      return 1;
   }
   
   //checks if cat's name is shorter than max limit
   if( strlen( checkName ) > CATNAME_CHARLIMIT ) {
      printf("Error: updated cat's name is longer than %d characters\n", CATNAME_CHARLIMIT);
      return 1;
   }

   //checks for duplicate cat names
   for( int i = 0 ; i < numberOfCats ; i++ ) {
      if( strcmp( checkName , catName[i] ) == 0 ) {
            printf("Error: \"%s\" is a duplicate cat name as in index [%d] \n", checkName, i);
            return 1;
      }
   }
   return 0;
}

int isUpdatedWeightOk( double checkWeight ) {
   if( checkWeight <= 0.0 ){
      printf("Error: updated cat has invalid weight of %f\n", checkWeight);
      return 1;
   }
   return 0;
}

