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
#include <stdbool.h>
#include "updateCats.h"
#include "addCats.h"
#include "config.h"
#define PROGRAM_NAME ("updateCats.c")

int updateCatName( int index , char newCatName[] ) {

   if( isValidName( newCatName ) == ERROR ) return ERROR;

   else if( isIndexValid( index ) == ERROR ) return ERROR;

   else {
       strcpy(catabase[index].name, newCatName);
       printf("cat at index [%d] has a new name: [%s]\n", index, catabase[index].name);
       return NOERROR;
   }

}

int fixCat( int index ) {
   
   if( isIndexValid( index ) == ERROR ) return ERROR;

   catabase[index].fixed = true;    //You can't unfix a cat
   printf("[%s] at index [%d] has been fixed\n", catabase[index].name , index);
   return NOERROR;

}

int updateCatWeight( int index , double newCatWeight ) {

   if( isValidWeight( newCatWeight ) == ERROR ) return ERROR;
   else if( isIndexValid( index ) == ERROR ) return ERROR;

   else {
       catabase[index].weight = newCatWeight;
       printf("[%s] at index [%d] has a new weight of %f\n", catabase[index].name, index, catabase[index].weight);
       return NOERROR;
   }

}

int updateCatCollar1( int index , enum Color newCollarColor1 ) {

    catabase[index].collarColor1 = newCollarColor1;
    return NOERROR;

}

int updateCatCollar2( int index , enum Color newCollarColor2 ) {

    catabase[index].collarColor2 = newCollarColor2;
    return NOERROR;

}

int updateCatLicense( int index , unsigned long long updatedLicense ) {

    catabase[index].license = updatedLicense;
    return NOERROR;

}

int isIndexValid( int index ) {
   if( (index < 0) || (index > numberOfCats - 1) ){
      fprintf( stderr, "%s: Index [%d] does not exist\n", PROGRAM_NAME, index);
      return ERROR;
   }
   else return NOERROR;
}
