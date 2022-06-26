#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"



TEST_CASE("Test get_sales_tax")
{
	REQUIRE(get_sales_tax_amount(10) == 0.675);
	REQUIRE(get_sales_tax_amount(20) == 1.35);
}

TEST_CASE("Test get_tip_amount")
{
	REQUIRE(get_tip_amount(20,15) == 3);
	REQUIRE(get_tip_amount(20,20) == 4);
}