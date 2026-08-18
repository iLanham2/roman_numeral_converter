// tests/dummy_test.cpp
#include <gtest/gtest.h>

std::string convertInteger(int number)
{
    return "I";
}

TEST(ConverIntegersToRomanNumerals, ConvertOne) {

    EXPECT_EQ("I", convertInteger(1));
}