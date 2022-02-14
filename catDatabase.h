///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 05d - Animal Farm 0 - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   21 Feb 2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include <stdbool.h>

enum Gender { MALE = 0 , FEMALE = 1 , UNKNOWN_GENDER = 2 };
enum Breed { MAINE_COON = 1 , MANX = 2 , SHORTHAIR = 3 , PERSIAN = 4 , SPHYNX = 5 , UNKNOWN_BREED = 6 };

extern char catName[][30];
extern enum Gender catGender[];
extern enum Breed catBreed[];
extern bool catFixed[];
extern double catWeight[];

extern int numberOfCats;

extern void initializeDatabase( );
