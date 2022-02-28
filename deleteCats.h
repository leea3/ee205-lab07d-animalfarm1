///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file deleteCats.h
/// @version 1.0
///
/// @brief contains functions that deletes all cats from the database
/// or only one cat.
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   10 Mar 2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include "catDatabase.h"

/* sets numberOfCats to zero
 *
 * changes high water mark to 0
 * note: data still exists
 */
extern void deleteAllCats( );

/* deletes array elements at specified index
 *
 * everything above deleted element gets shifted down
 *
 * @param array index to be deleted
 */
extern void deleteCat( int index );
