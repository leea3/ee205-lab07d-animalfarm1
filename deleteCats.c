///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 05d - Animal Farm 0 - EE 205 - Spr 2022
///
/// @file deleteCats.c
/// @version 1.0
///
/// @brief contains functions that deletes all cats from the database
/// or only one cat.
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   21 Feb 2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>
#include "catDatabase.h"
#include "updateCats.h"
#include "deleteCats.h"

void deleteAllCats( ) {
   
   numberOfCats = 0;  //changes global variable found in catDatabase.h to 0
   printf("deleted all cats\n");

}

void deleteCat( int index ) {

   if( isIndexValid(index) == 0 ) { //checks if inputted index is occupied by a cat
      for ( int i = index ; i < MAX_CATS - 1; i++ ) {  
         strcpy( catName[i] , catName[i+1] );
         catGender[i] = catGender[i+1];
         catBreed[i] = catBreed[i+1];
         catFixed[i] = catFixed[i+1];
         catWeight[i] = catWeight[i+1];
        }
    numberOfCats--;
   }
   else printf("Error: cannot delete cat at index [%d]\n", index);
}
