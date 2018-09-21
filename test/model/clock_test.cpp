#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "clock.h"


TEST_CASE("Test get hours from seconds")
{
	Clock clock;

	REQUIRE(clock.gets_hours(3600) == 1);
	REQUIRE(clock.gets_hours(34950) == 9);
	REQUIRE(clock.gets_hours(68950) == 19);
	REQUIRE(clock.gets_hours(150000) == 17);

}

TEST_CASE("Test get minutes from seconds")
{

	Clock clock; 
	REQUIRE(clock.gets_minutes(3600) == 0);
	REQUIRE(clock.gets_minutes(3800) == 3);
	REQUIRE(clock.gets_minutes(34950) == 42);

}

TEST_CASE("Test get seconds from seconds since 1970")
{
	Clock clock;

	REQUIRE(clock.gets_seconds(3600) == 0);
	REQUIRE(clock.gets_seconds(3800) == 20);
	REQUIRE(clock.gets_seconds(34950) == 30);

}
