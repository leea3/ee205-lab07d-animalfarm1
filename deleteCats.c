///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 05d - Animal Farm 0 - EE 205 - Spr 2022
///
/// @file deleteCats.c
/// @version 1.0
///
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   21 Feb 2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include "catDatabase.h"
#include "deleteCats.h"

void deleteAllCats( ) {
   
   numberOfCats = 0;  //changes high water mark to 0 (data is still there)
   printf("deleted all cats\n");

}

void deleteCat( int index ) {

    for ( int i = index ; i < MAX_CATS - 1; i++ ) {  
            strcpy( catName[i] , catName[i+1] );
            catGender[i] = catGender[i+1];
            catBreed[i] = catBreed[i+1];
            catFixed[i] = catFixed[i+1];
            catWeight[i] = catWeight[i+1];
        }
    numberOfCats--;
}

