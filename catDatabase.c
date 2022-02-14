///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 05d - Animal Farm 0 - EE 205 - Spr 2022
///
/// @file catDatabase.c
/// @version 1.0
///
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   21 Feb 2022
///////////////////////////////////////////////////////////////////////////////

#include <stdbool.h>
#include <string.h>
#include "catDatabase.h"

#define MAX_CATS 10
#define CATNAME_CHARLIMIT 30

int numberOfCats;

//stored arrays as global variables
char catName[MAX_CATS][CATNAME_CHARLIMIT];
enum Gender catGender[MAX_CATS];
enum Breed catBreed[MAX_CATS];
bool catFixed[MAX_CATS];
double catWeight[MAX_CATS];

//initializes database to default
void initializeDatabase( ) {
   numberOfCats= 0;
   memset( catName , '-' , 30 );

   for( int i = 0 ; i < MAX_CATS ; i++ ) {
      catGender[i] = UNKNOWN_GENDER;
      catBreed[i] = UNKNOWN_BREED;
      catFixed[i] = false;
      catWeight[i] = 0.0;
   }
}

