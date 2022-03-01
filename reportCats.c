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
#define PROGRAM_NAME ("reportCats.c")

void printCat( int index ) {
   if( (index < 0) | (index >= numberOfCats) ){
      fprintf( stderr, "%s: Bad Cat [%d]\n", PROGRAM_NAME, index);
   }
   else printf("cat index = [%d] name=[%s] gender=[%d] breed=[%d] isFixed=[%d] weight=[%f] color1  = [%d] color2 = [%d] "
               "license = [%llu] \n" , index , catabase[index].name, catabase[index].gender ,
               catabase[index].breed , catabase[index].fixed , catabase[index].weight, catabase[index].collarColor1,
               catabase[index].collarColor2, catabase[index].license );
}


void printAllCats( ) {
   for( int i = 0 ; i < numberOfCats ; i++ ) {
   printf("cat index = [%d] name=[%s] gender=[%d] breed=[%d] isFixed=[%d] weight=[%f] color1  = [%d] color2 = [%d] "
          "license = [%llu] \n" , i , catabase[i].name, catabase[i].gender ,
          catabase[i].breed , catabase[i].fixed , catabase[i].weight, catabase[i].collarColor1, catabase[i].collarColor2,
          catabase[i].license );
   }
}

int findCat( char findName[] ){
   for( int i = 0 ; i < numberOfCats ; i++ ) {
      if( strcmp( findName , catabase[i].name ) == 0) return i;
   }
   fprintf( stderr, "%s: cannot find \"%s\" in database\n" , PROGRAM_NAME, findName);
   exit( EXIT_FAILURE );
}
