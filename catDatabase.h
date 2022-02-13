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

enum Gender { MALE , FEMALE , UNKNOWN_GENDER };
enum Breed { MAINE_COON , MANX , SHORTHAIR , PERSIAN , SPHYNX , UNKNOWN_BREED };

extern void initializeDatabase( );
