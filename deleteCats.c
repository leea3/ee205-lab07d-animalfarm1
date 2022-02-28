///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file deleteCats.c
/// @version 1.0
///
/// @brief contains functions that deletes all cats from the database
/// or only one cat.
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   10 Mar 2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>
#include "updateCats.h"
#include "deleteCats.h"
#define PROGRAM_NAME ("deleteCats.c")

void deleteAllCats( ) {
   
   numberOfCats = 0;  //changes global variable found in catDatabase.h to 0
   printf("deleted all cats\n");

}

void deleteCat( int index ) {

   if( isIndexValid(index) == 0 ) { //checks if inputted index is occupied by a cat
      for ( int i = index ; i < MAX_CATS - 1; i++ ) {  
         strcpy( catabase[i].name , catabase[i+1].name );
         catabase[i].gender = catabase[i+1].gender;
          catabase[i].breed = catabase[i+1].breed;
          catabase[i].fixed = catabase[i+1].fixed;
          catabase[i].weight = catabase[i+1].weight;
        }
    numberOfCats--;
   }
   else fprintf( stderr, "%s: cannot delete cat at index [%d]\n", PROGRAM_NAME, index);
}
