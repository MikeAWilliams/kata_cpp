#define CATCH_CONFIG_MAIN 
#include "catch2/catch.hpp"

#include <algorithm>
#include <iostream>
#include <string>

std::string ReverseString(const char* value)
{
   std::string result {value};
   std::reverse(result.begin(), result.end());
   return result;
}

TEST_CASE("Hello world")
{
   REQUIRE(0 == ReverseString("hello world").compare("dlrow olleh"));
}

TEST_CASE("Odd characters")
{
   REQUIRE(0 == ReverseString("abc").compare("cba"));
}

TEST_CASE("Even characters")
{
   REQUIRE(0 == ReverseString("abcd").compare("dcba"));
}

TEST_CASE("Single character")
{
   REQUIRE(0 == ReverseString("r").compare("r"));
}

TEST_CASE("Empty")
{
   REQUIRE(0 == ReverseString("").compare(""));
}