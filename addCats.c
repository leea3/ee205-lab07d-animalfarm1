///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 05d - Animal Farm 0 - EE 205 - Spr 2022
///
/// @file addCats.c
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

int addCat( char addName[] , enum Gender addGender , enum Breed addBreed , bool addFixed , double addWeight){
   
   isFull();
   strcpy(catName[numberOfCats] , addName);
   catGender[numberOfCats] = addGender;
   catBreed[numberOfCats] = addBreed;
   catFixed[numberOfCats] = addFixed;
   catWeight[numberOfCats] = addWeight;
   numberOfCats = numberOfCats + 1;

   return numberOfCats;
}

int isFull( ) {
   if( numberOfCats >= MAX_CATS ){
      printf("Error, more cats entered than database can handle\n");
      exit(0);
   }
   else return 0;
}
