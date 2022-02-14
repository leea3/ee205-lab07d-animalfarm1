///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 05d - Animal Farm 0 - EE 205 - Spr 2022
///
/// @file addCats.h
/// @version 1.0
///
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   21 Feb 2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include <stdbool.h>
#include "catDatabase.h"

extern int addCat( char addName[] , enum Gender addGender , enum Breed addBreed , bool addFixed , double addWeight);
extern int isFull( );
extern int isNameEmpty( char checkName[] );
