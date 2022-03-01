///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file addCats.c
/// @version 1.0
///
/// @brief function + validation checks for adding cats to database 
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   10 Mar 2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "addCats.h"
#define PROGRAM_NAME ("addCats.c")

int addCat( char addName[] , enum Gender addGender , enum Breed addBreed , bool addFixed , double addWeight,
        enum Color addCollar1, enum Color addCollar2, unsigned long long addLicense ){
   
   //validation checks
   isFull( );
   validateName( addName );
   isWeightOk( addWeight );

   //add cat info to database
   strcpy(catabase[numberOfCats].name , addName);
    catabase[numberOfCats].gender = addGender;
    catabase[numberOfCats].breed = addBreed;
    catabase[numberOfCats].fixed = addFixed;
    catabase[numberOfCats].weight = addWeight;
    catabase[numberOfCats].collarColor1 = addCollar1;
    catabase[numberOfCats].collarColor2 = addCollar2;
    catabase[numberOfCats].license = addLicense;

   numberOfCats++;

   return numberOfCats;
}

int isFull( ) {
   if( numberOfCats >= MAX_CATS ){
      fprintf( stderr, "%s: more cats entered than database can handle: CAT LIMIT = %d\n", PROGRAM_NAME, MAX_CATS);
      exit( EXIT_FAILURE );
   }
   else return 0;
}

int validateName( char checkName[] ) {
   //check if cat's name is not blank
   if( strlen( checkName ) == 0 ) {
      fprintf( stderr, "%s: empty cat name at index[%d]\n", PROGRAM_NAME, numberOfCats);
      exit( EXIT_FAILURE );
   }
   
   //checks if cat's name is shorter than max limit
   else if( strlen( checkName ) > CATNAME_CHARLIMIT ) {
      fprintf( stderr, "%s: cat's name at index [%d] is longer than %d characters\n", PROGRAM_NAME, numberOfCats, CATNAME_CHARLIMIT);
      exit( EXIT_FAILURE );
   }

   //checks for duplicate cat names
   for( int i = 0 ; i < numberOfCats ; i++ ) {
      if( strcmp( checkName , catabase[i].name ) == 0 ) {
            fprintf( stderr, "%s: cats in index [%d] and [%d] has duplicate names of \"%s\"\n", PROGRAM_NAME, i, numberOfCats, checkName);
            exit( EXIT_FAILURE);
      }
   }

   return 0;

}

int isWeightOk( double checkWeight ) {
   if( checkWeight <= 0.0 ){
      fprintf( stderr, "%s: cat at index [%d] has invalid weight of %f\n", PROGRAM_NAME, numberOfCats , checkWeight);
      exit( EXIT_FAILURE );
   }
   return 0;
}

