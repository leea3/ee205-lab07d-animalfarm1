///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file reportCats.c
/// @version 1.0
///
/// @brief prints the cat information at given index or prints the entire
/// database. findCat() locates a cat in the database given a name.
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   10 Mar 2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include "catDatabase.h"

/* Prints database contents at a specified index
 * 
 * if index is invalid, outputs an error and moves on with the program
 *
 * @param index of the cat
 */
extern void printCat( int index );

// Prints the contents of the entire database
extern void printAllCats( );

/* Returns the cat's index if a name is fed through
 * 
 * if cat cannot be found, terminates program
 *
 * @param name of the cat in quotes (i.e. "Chili")
 */
extern int findCat( char findName[] );

