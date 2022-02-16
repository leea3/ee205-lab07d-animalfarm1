///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 05d - Animal Farm 0 - EE 205 - Spr 2022
///
/// @file addCats.h
/// @version 1.0
///
/// @brief function + validation checks for adding cats to the database
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   21 Feb 2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include <stdbool.h>
#include "catDatabase.h"

/** Function that adds cats to database
 * 
 * @param name of the cat to added
 * @param gender of the cat
 * @param breed of the cat
 * @param is the cat fixed
 * @param weight of the cat
 */
extern int addCat( char addName[] , enum Gender addGender , enum Breed addBreed , bool addFixed , double addWeight);

/* Checks if the number of cats exceeds the database limit
 *
 * if Database is not full, returns 0
 * else, terminates program
 */
extern int isFull( );

/* Checks if the name is valid
 *
 * Cat's name must be under the character limit, not blank, and not a copy of another cat's name
 * If the name is valid, returns 0
 * else, terminates program
 *
 * @param name of the cat
 */
extern int validateName( char checkName[] );

/* Checks if entered weight is a valid number
 *
 * If weight is valid, returns 0
 * else, terminates program
 *
 * @param weight of the cat
 */
extern int isWeightOk( double checkWeight );
