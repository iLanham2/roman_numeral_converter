// tests/dummy_test.cpp
#include <gtest/gtest.h>
#include "convert_integers_to_roman_numerals.h"


TEST(ConverIntegersToRomanNumerals, ConvertOne) {

    EXPECT_EQ("I", convertInteger(1));
}

TEST(ConvertIntegersToRomanNumerals, ConvertTwo) {
    EXPECT_EQ("II", convertInteger(2));
}

TEST(ConvertIntegersToRomanNumerals, ConvertThree) {
    EXPECT_EQ("III", convertInteger(3));
}
