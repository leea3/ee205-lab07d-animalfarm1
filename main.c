///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 07d - Animal Farm 1 - EE 205 - Spr 2022
///
/// @file main.c
/// @version 1.0
///
/// @brief This program is a simple database of cats in which entries can be updated,
/// displayed, and deleted.
///
/// @note: Database is stored as global variables 
///
/// @author Arthur Lee <leea3@hawaii.edu>
/// @date   10 Mar 2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include "addCats.h"
#include "catDatabase.h"
#include "reportCats.h"
#include "updateCats.h"
#include "deleteCats.h"

#define MAX_NAME1 "1234567890123456789012345678901234567890123456789"
#define MAX_NAME2 "DIFFERENT 123456789012345678901234567890123456789"
#define ILLEGAL_NAME "123456789012345678901234567890123456789012345678901"
#define BAD_CAT (1)
#define ERROR (1)
#define NOERROR (0)

#define DEBUG
int main() {
    printf( "Starting %s\n", "Animal Farm 1" ) ;
    initializeDatabase() ;
    addCat( "Loki", MALE, PERSIAN, true, 8.5, BLACK, WHITE, 101 ) ;
    addCat( "Milo", MALE, MANX, true, 7.0, BLACK, RED, 102 ) ;
    addCat( "Bella", FEMALE, MAINE_COON, true, 18.2, BLACK, BLUE, 103 ) ;
    addCat( "Kali", FEMALE, SHORTHAIR, false, 9.2, BLACK, GREEN, 104 ) ;
    addCat( "Trin", FEMALE, MANX, true, 12.2, BLACK, PINK, 105 ) ;
    addCat( "Chili", UNKNOWN_GENDER, SHORTHAIR, false, 19.0, WHITE, BLACK, 106 ) ;

#ifdef DEBUG
    // Test for empty name
    //assert( addCat( "", UNKNOWN_GENDER, SHORTHAIR, false, 19.0, BLACK, WHITE, 101 ) == ERROR ) ;
    // Test for max name
    //assert( addCat( MAX_NAME1, UNKNOWN_GENDER, SHORTHAIR, false, 19.0, WHITE, RED, 107 ) != ERROR ) ;
    // Test for name too long
    //assert( addCat( ILLEGAL_NAME, UNKNOWN_GENDER, SHORTHAIR, false, 19.0, WHITE, BLUE, 108 ) == ERROR ) ;
    // Test for duplicate cat name
    //assert( addCat( "Chili", UNKNOWN_GENDER, SHORTHAIR, false, 0, WHITE, GREEN, 109 ) == ERROR ) ;
    // Test for weight <= 0
    //assert( addCat( "Neo", UNKNOWN_GENDER, SHORTHAIR, false, 0, WHITE, PINK, 110 ) == ERROR ) ;
    // Test for printCat( -1 ) ;
    printCat( -1 ) ;
    // Test for out of bounds
    printCat( 2000 ) ;
    // Test finding a cat...
    assert( findCat( "Bella" ) == 2 ) ;
    // Test not finding a cat
    //assert( findCat( "Bella's not here" ) == BAD_CAT ) ;
    // Test addCat details
    size_t testCat = addCat( "Oscar", UNKNOWN_GENDER, SHORTHAIR, false, 1.1, RED, BLACK, 111 ) ;
    printCat( testCat );
    assert( testCat != BAD_CAT );
    assert( testCat < MAX_CATS );
    // Test setting a large name
    assert( updateCatName( testCat, MAX_NAME2 ) == NOERROR ) ;
    printCat( testCat ) ;
    // Test setting an out-of-bounds name
    assert( updateCatName( testCat, ILLEGAL_NAME ) == ERROR ) ;
    printCat( testCat ) ;
    // Test setting an illegal cat weight
    assert( updateCatWeight( testCat, -1 ) == ERROR ) ;
#endif

    printAllCats() ;
    int kali = findCat( "Kali" ) ;
    assert( updateCatName( kali, "Chili" ) == ERROR ) ; // duplicate cat name should fail
    printCat( kali ) ;
    assert( updateCatName( kali, "Capulet" ) == NOERROR ) ;
    assert( updateCatWeight( kali, 9.9 ) == NOERROR ) ;
    assert( fixCat( kali ) == NOERROR ) ;
    assert( updateCatCollar1( kali, GREEN ) == NOERROR ) ;
    assert( updateCatCollar2( kali, GREEN ) == NOERROR ) ;
    assert( updateCatLicense( kali, 201 ) == NOERROR ) ;
    printCat( kali ) ;
    printAllCats() ;
    deleteAllCats() ;
    printAllCats() ;
    printf( "Done with %s\n", "Animal Farm 1" ) ;
    return( 0 ) ;
}

