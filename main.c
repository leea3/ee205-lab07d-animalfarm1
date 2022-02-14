///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 05d - Animal Farm 0 - EE 205 - Spr 2022
///
/// @file main.c
/// @version 1.0
///
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   21 Feb 2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "addCats.h"
#include "catDatabase.h"

#define DEBUG

int main(){
   printf("Starting Animal Farm 0\n");
   
   initializeDatabase( );

   addCat( "Loki",  MALE,           PERSIAN,    true,  8.5 ) ;
   addCat( "Milo",  MALE,           MANX,       true,  7.0 ) ;
   addCat( "Bella", FEMALE,         MAINE_COON, true,  18.2 ) ;
   addCat( "Kali",  FEMALE,         SHORTHAIR,  false, 9.2 ) ;
   addCat( "Trin",  FEMALE,         MANX,       true,  12.2 ) ;
   addCat( "Chili", UNKNOWN_GENDER, SHORTHAIR,  false, 19.0 ) ;
   
#ifdef DEBUG

   for( int i = 0 ; i < numberOfCats + 2; i++ ) {
   printf("cat index = [%d] name=[%s] gender=[%d] breed=[%d] isFixed=[%d] weight=[%f] \n" , i , catName[i], catGender[i] , catBreed[i] , catFixed[i] , catWeight[i]);
   }
#endif

   printf("Done with Animal Farm 0\n");
}
