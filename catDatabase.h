///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 05d - Animal Farm 0 - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @brief Contains global variables that contains cat information
/// as well as a function to initialize the database
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   21 Feb 2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include <stdbool.h>

#define MAX_CATS 10
#define CATNAME_CHARLIMIT 30

enum Gender {  UNKNOWN_GENDER = 0 , MALE = 1 , FEMALE = 2 };
enum Breed { UNKNOWN_BREED = 0 , MAINE_COON = 1 , MANX = 2 , SHORTHAIR = 3 , PERSIAN = 4 , SPHYNX = 5 };

//Note: arrays held as global variables
extern char catName[][CATNAME_CHARLIMIT];
extern enum Gender catGender[];
extern enum Breed catBreed[];
extern bool catFixed[];
extern double catWeight[];

//Note: Current number of cats in database held as a global variable
extern int numberOfCats;

/* Zeroes out the database based on MAX_CATS
 *
 * zeros out the five arrays and number of cats in database
 */
extern void initializeDatabase( );
