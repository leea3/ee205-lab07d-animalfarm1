///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file updateCats.h
/// @version 1.0
///
/// @brief Allows changes to the database given the parameters
/// are valid.
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   10 Mar 2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

/* Updates the cat's name at specified index
 *
 * if name is invalid or the index is invalid, returns 1
 * else, name is changed and returns 0
 *
 * @param index of the cat to be given a new name
 * @param new name of the cat
 */
extern int updateCatName( int index , char newCatName[] );

/* Fixes the cat at specified index
 *
 * If the index is invalid, returns 1
 * else, cat is fixed and returns 0
 *
 * @param index of the cat to be fixed
 */
extern int fixCat( int index );

/* Updates the cat's weight at specified index
 *
 * if the weight is invalid or the cat's weight is invalid, returns 1
 * else, cat's weight is updated and returns 0
 *
 * @param index of the cat
 * @param new weight
 */
extern int updateCatWeight( int index , double newCatWeight );

/* Checks if the entered index is valid
 * 
 * index entered must not be negative or exceed number of cats in database
 *
 * if valid, returns 0
 * else, returns 1
 *
 * @param index of the cat
 */
extern int isIndexValid( int index );

/* Checks if the entered name is valid.
 *
 * Checks if name exceeds character limit, if the name is blank
 * or if the name is a duplicate of another cat.
 *
 * if valid, returns 0
 * else, returns 1
 *
 * @param name of the cat
 */
extern int isUpdatedNameValid( char checkName[] );

/* Checks if entered weight is valid
 *
 * Checks if the weight is a positive number
 *
 * if valid, returns 0
 * else, returns 1
 *
 * @param weight of the cat
 */
extern int isUpdatedWeightOk( double checkWeight );
