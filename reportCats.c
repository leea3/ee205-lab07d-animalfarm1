///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 05d - Animal Farm 0 - EE 205 - Spr 2022
///
/// @file reportCats.h
/// @version 1.0
///
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   21 Feb 2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
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

//int findCat( char findName[] );

