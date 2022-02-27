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

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "catDatabase.h"

//stored number of cats in database as global variables
int numberOfCats;

//stored arrays as global variables
char catName[MAX_CATS][CATNAME_CHARLIMIT];
enum Gender catGender[MAX_CATS];
enum Breed catBreed[MAX_CATS];
bool catFixed[MAX_CATS];
double catWeight[MAX_CATS];

void initializeDatabase( ) {
   numberOfCats= 0;

   for( int i = 0 ; i < MAX_CATS ; i++ ) {
      memset( catName[i] , '-' , 10 );
      catGender[i] = UNKNOWN_GENDER;
      catBreed[i] = UNKNOWN_BREED;
      catFixed[i] = false;
      catWeight[i] = 0.0;

   }
}

