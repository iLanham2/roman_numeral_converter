// tests/dummy_test.cpp
#include <gtest/gtest.h>
#include "convert_integers_to_roman_numerals.h"

struct RomanNumeralTestCase {
    int input;
    std::string expected;
};

class ConvertIntegersToRomanNumerals : public testing::TestWithParam<RomanNumeralTestCase> {};

TEST_P(ConvertIntegersToRomanNumerals, ConvertInteger) {
    auto [input, expected] = GetParam();
    EXPECT_EQ(expected, convertIntToRoman(input));
}

INSTANTIATE_TEST_SUITE_P(
    SmallIntegers,
    ConvertIntegersToRomanNumerals,
    testing::Values(
        RomanNumeralTestCase{1, "I"},
        RomanNumeralTestCase{2, "II"},
        RomanNumeralTestCase{3, "III"},
        RomanNumeralTestCase{4, "IV"},
        RomanNumeralTestCase{5, "V"}
    )
);
