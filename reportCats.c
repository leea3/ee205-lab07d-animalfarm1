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
   else printf("cat index = [%d] name=[%s] gender=[%s] breed=[%s] isFixed=[%d] weight=[%f] color1  = [%s] color2 = [%s] "
               "license = [%llu] \n" , index , catabase[index].name, genderToString( catabase[index].gender ) ,
               breedToString( catabase[index].breed ) , catabase[index].fixed , catabase[index].weight, colorToString( catabase[index].collarColor1 ),
               colorToString( catabase[index].collarColor2 ), catabase[index].license );
}

void printAllCats( ) {
   for( int i = 0 ; i < numberOfCats ; i++ ) {
       printf("cat index = [%d] name=[%s] gender=[%s] breed=[%s] isFixed=[%d] weight=[%f] color1  = [%s] color2 = [%s] "
              "license = [%llu] \n" , i , catabase[i].name, genderToString( catabase[i].gender ) ,
              breedToString( catabase[i].breed ) , catabase[i].fixed , catabase[i].weight, colorToString( catabase[i].collarColor1 ),
               colorToString( catabase[i].collarColor2 ), catabase[i].license );
   }
}

int findCat( char findName[] ){
   for( int i = 0 ; i < numberOfCats ; i++ ) {
      if( strcmp( findName , catabase[i].name ) == 0) return i;
   }
   fprintf( stderr, "%s: cannot find \"%s\" in database, exiting program...\n" , PROGRAM_NAME, findName);
   exit( EXIT_FAILURE );
}

char* genderToString ( enum Gender convertGender ) {
    switch( convertGender ){
        case UNKNOWN_GENDER: return "UNKNOWN GENDER";
        case MALE:           return "MALE";
        case FEMALE:         return "FEMALE";
        default: fprintf(stderr, "%s: Invalid Gender", PROGRAM_NAME);
        break;
    }
    return 0;
}

char* breedToString ( enum Breed convertBreed ) {
    switch( convertBreed ){
        case UNKNOWN_BREED: return "UNKNOWN BREED";
        case MAINE_COON:    return "MAINE COON";
        case MANX:          return "MANX";
        case SHORTHAIR:     return "SHORTHAIR";
        case PERSIAN:       return "PERSIAN";
        case SPHYNX:        return "SPHYNX";
        default: fprintf(stderr, "%s: Invalid Breed", PROGRAM_NAME);
        break;
    }
    return 0;
}
 char* colorToString ( enum Color convertColor ) {
    switch( convertColor ){
        case BLACK: return "BLACK";
        case WHITE: return "WHITE";
        case BLUE:  return "BLUE";
        case RED:   return "RED";
        case GREEN: return "GREEN";
        case PINK:  return "PINK";
        default: fprintf(stderr, "%s: Invalid Collar Color", PROGRAM_NAME);
        break;
    }
    return 0;
}
