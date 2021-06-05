#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get_gc_content of dna") 
{
	REQUIRE( get_gc_content("AGCTATAG") == .375);
    REQUIRE( get_gc_content("CGCTATAG") == .50);
}