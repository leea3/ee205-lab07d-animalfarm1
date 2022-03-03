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
#include "config.h"
#define PROGRAM_NAME ("addCats.c")

int addCat( char addName[] , enum Gender addGender , enum Breed addBreed , bool addFixed , double addWeight,
        enum Color addCollar1, enum Color addCollar2, unsigned long long addLicense ){
   
   //validation checks
   if( isFull( ) == ERROR ) return BAD_CAT;
   else if( isValidName( addName ) == ERROR ) return BAD_CAT;
   else if( isValidWeight( addWeight ) == ERROR ) return BAD_CAT;

   //add cat info to database
   else{
       strcpy(catabase[numberOfCats].name , addName);
       catabase[numberOfCats].gender = addGender;
       catabase[numberOfCats].breed = addBreed;
       catabase[numberOfCats].fixed = addFixed;
       catabase[numberOfCats].weight = addWeight;
       catabase[numberOfCats].collarColor1 = addCollar1;
       catabase[numberOfCats].collarColor2 = addCollar2;
       catabase[numberOfCats].license = addLicense;

       numberOfCats++;

       return (numberOfCats - 1);
   }
}

int isFull( ) {
   if( numberOfCats >= MAX_CATS ){
      fprintf( stderr, "%s: more cats entered than database can handle: CAT LIMIT = %d, exiting program...\n", PROGRAM_NAME, MAX_CATS);
      return ERROR;
   }
   else return NOERROR;
}

int isValidName( char checkName[] ) {
   //check if cat's name is not blank
   if( strlen( checkName ) == 0 ) {
      fprintf( stderr, "%s: empty cat name at index[%d], exiting program...\n", PROGRAM_NAME, numberOfCats);
      return ERROR;
   }
   
   //checks if cat's name is shorter than max limit
   else if( strlen( checkName ) > CATNAME_CHARLIMIT ) {
      fprintf( stderr, "%s: cat's name at index [%d] is longer than %d characters, exiting program...\n", PROGRAM_NAME, numberOfCats, CATNAME_CHARLIMIT);
      return ERROR;
   }

   //checks for duplicate cat names
   for( int i = 0 ; i < numberOfCats ; i++ ) {
      if( strcmp( checkName , catabase[i].name ) == 0 ) {
            fprintf( stderr, "%s: cats in index [%d] and [%d] has duplicate names of \"%s, exiting program...\n", PROGRAM_NAME, i, numberOfCats, checkName);
            return ERROR;
      }
   }

   return NOERROR;

}

int isValidWeight( double checkWeight ) {
   if( checkWeight <= 0.0 ){
      fprintf( stderr, "%s: cat at index [%d] has invalid weight of %f\n", PROGRAM_NAME, numberOfCats , checkWeight);
      return ERROR;
   }
   return NOERROR;
}

