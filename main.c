///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file main.c
/// @version 1.0
///
/// @brief This program is a simple database of cats in which entries can be updated,
/// displayed, and deleted.
///
/// @note: Database is stored as global variables 
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   10 Mar 2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
#include "addCats.h"
#include "catDatabase.h"
#include "reportCats.h"
#include "updateCats.h"
#include "deleteCats.h"

int main(){
   printf("Starting Animal Farm 0\n");

   initializeDatabase( );

   addCat( "Loki", MALE, PERSIAN, true, 8.5, BLACK, WHITE, 101 ) ;
   addCat( "Milo", MALE, MANX, true, 7.0, BLACK, RED, 102 ) ;
   addCat( "Bella", FEMALE, MAINE_COON, true, 18.2, BLACK, BLUE, 103 ) ;
   addCat( "Kali", FEMALE, SHORTHAIR, false, 9.2, BLACK, GREEN, 104 ) ;
   addCat( "Trin", FEMALE, MANX, true, 12.2, BLACK, PINK, 105 ) ;
   addCat( "Chili", UNKNOWN_GENDER, SHORTHAIR, false, 19.0, WHITE, BLACK, 106 ) ;


   printAllCats();

   int kali = findCat( "Kali" );
   updateCatName( kali, "Chili" ) ; // this should fail
   printCat( kali );
   updateCatName( kali , "Capulet" ) ;
   updateCatWeight( kali, -5 ); //this should fail
   updateCatWeight( kali, 9.9 ) ;
   fixCat( kali ) ;
   printCat( kali );

   printAllCats();

   deleteCat( kali );
   printAllCats();

   deleteAllCats();
   printAllCats();   

   printf("Done with Animal Farm 0\n");
}

