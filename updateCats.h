///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 05d - Animal Farm 0 - EE 205 - Spr 2022
///
/// @file updateCats.h
/// @version 1.0
///
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   21 Feb 2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

extern int updateCatName( int index , char newCatName[] );
extern int fixCat( int index );
extern int updateCatWeight( int index , double newCatWeight );

extern int isIndexValid( int index );
extern int isUpdatedNameValid( char checkName[] );
extern int isUpdatedWeightOk( double checkWeight );
