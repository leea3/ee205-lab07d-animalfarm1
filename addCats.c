///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 05d - Animal Farm 0 - EE 205 - Spr 2022
///
/// @file addCats.c
/// @version 1.0
///
/// @brief function + validation checks for adding cats to database 
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

int addCat( char addName[] , enum Gender addGender , enum Breed addBreed , bool addFixed , double addWeight){
   
   //validation checks
   isFull( );
   validateName( addName );
   isWeightOk( addWeight );

   //add cat info to database
   strcpy(catName[numberOfCats] , addName);
   catGender[numberOfCats] = addGender;
   catBreed[numberOfCats] = addBreed;
   catFixed[numberOfCats] = addFixed;
   catWeight[numberOfCats] = addWeight;
   numberOfCats++;

   return numberOfCats;
}

int isFull( ) {
   if( numberOfCats >= MAX_CATS ){
      printf("Error, more cats entered than database can handle: CAT LIMIT = %d\n", MAX_CATS);
      exit( EXIT_FAILURE );
   }
   else return 0;
}

int validateName( char checkName[] ) {
   //check if cat's name is not blank
   if( strlen( checkName ) == 0 ) {
      printf("Error: empty cat name at index[%d]\n", numberOfCats);
      exit( EXIT_FAILURE );
   }
   
   //checks if cat's name is shorter than max limit
   if( strlen( checkName ) > CATNAME_CHARLIMIT ) {
      printf("Error: cat's name at index [%d] is longer than %d characters\n", numberOfCats, CATNAME_CHARLIMIT);
      exit( EXIT_FAILURE );
   }

   //checks for duplicate cat names
   for( int i = 0 ; i < numberOfCats ; i++ ) {
      if( strcmp( checkName , catName[i] ) == 0 ) {
            printf("Error: cats in index [%d] and [%d] has duplicate names of \"%s\"\n", i, numberOfCats, checkName);
            exit( EXIT_FAILURE);
      }
   }

   return 0;

}

int isWeightOk( double checkWeight ) {
   if( checkWeight <= 0.0 ){
      printf("Error: cat at index [%d] has invalid weight of %f\n", numberOfCats , checkWeight);
      exit( EXIT_FAILURE );
   }
   return 0;
}

