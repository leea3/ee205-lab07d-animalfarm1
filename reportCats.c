///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file reportCats.h
/// @version 1.0
///
/// @brief prints the cat information at given index or prints the entire
/// database. findCat() locates a cat in the database given a name.
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   10 Mar 2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reportCats.h"
#include "catDatabase.h"

void printCat( int index ) {
   if( (index < 0) | (index >= numberOfCats) ){
      printf("animalFarm0: Bad Cat [%d]\n", index);
   }
   else printf("Cat Index = [%d] name=[%s] gender=[%d] breed=[%d] isFixed=[%d] weight=[%f]\n", index , catName[index] , catGender[index] , catBreed[index] , catFixed[index] , catWeight[index]);
}


void printAllCats( ) {
   for( int i = 0 ; i < numberOfCats ; i++ ) {
   printf("cat index = [%d] name=[%s] gender=[%d] breed=[%d] isFixed=[%d] weight=[%f] \n" , i , catName[i], catGender[i] , catBreed[i] , catFixed[i] , catWeight[i]);
   }
}

int findCat( char findName[] ){
   for( int i = 0 ; i < numberOfCats ; i++ ) {
      if( strcmp( findName , catName[i] ) == 0) return i;
   }
   printf("Error: cannot find \"%s\" in database\n" , findName);
   exit( EXIT_FAILURE );
}
