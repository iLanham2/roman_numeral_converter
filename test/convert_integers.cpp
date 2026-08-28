// tests/dummy_test.cpp
#include <gtest/gtest.h>

std::string convertInteger(int number)
{
    if (number == 1)
    {
        return "I";
    }
    return "II";
}

TEST(ConverIntegersToRomanNumerals, ConvertOne) {

    EXPECT_EQ("I", convertInteger(1));
}

TEST(ConvertIntegersToRomanNumerals, ConvertTwo) {
    EXPECT_EQ("II", convertInteger(2));
}
