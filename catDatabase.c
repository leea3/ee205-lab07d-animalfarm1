///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file catDatabase.c
/// @version 1.0
///
/// @brief Contains global variables that contains cat information
/// as well as a function to initialize the database
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   10 Mar 2022
///////////////////////////////////////////////////////////////////////////////

#include <stdbool.h>
#include <string.h>
#include "catDatabase.h"

//stored number of cats in database as global variables
int numberOfCats;

struct cat_database catabase[MAX_CATS];

void initializeDatabase( ) {
   numberOfCats= 0;

   for( int i = 0 ; i < MAX_CATS ; i++ ) {
      memset(catabase[i].name , '-' , 10 );
      catabase[i].gender = UNKNOWN_GENDER;
      catabase[i].breed = UNKNOWN_BREED;
      catabase[i].fixed = false;
      catabase[i].weight = 0.0;
      catabase[numberOfCats].collarColor1 = BLACK;
      catabase[numberOfCats].collarColor2 = WHITE;
      catabase[numberOfCats].license = 000;
   }
}

