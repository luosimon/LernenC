#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//#include "factorial.hpp"

//*
unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}
//*/

TEST_CASE("vvvv"){
    CHECK(0 == 0);
}

TEST_CASE( "Factorials are computed cc", "[factorial]" ) {
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(4) == 23 );
    REQUIRE( Factorial(10) == 3628800 );

}