///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 05d - Animal Farm 0 - EE 205 - Spr 2022
///
/// @file catDatabase.c
/// @version 1.0
///
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   21 Feb 2022
///////////////////////////////////////////////////////////////////////////////

#include <stdbool.h>
#include "catDatabase.h"

const int MAX_CATS = 10;
const int CATNAME_CHARLIMIT = 30;

int numberofcats;

//stored arrays as global variables
char catName[MAX_CATS][CATNAME_CHARLIMIT];
enum Gender catGender[MAX_CATS];
enum Breed catBreed[MAX_CATS];
bool catFixed[MAX_CATS];
double catWeight[MAX_CATS];
