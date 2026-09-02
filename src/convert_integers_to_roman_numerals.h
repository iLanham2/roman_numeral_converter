#include <string>
#include <vector>

void addNumeral(int &number, std::string &romanNumeral, int numeralValue, std::string numeralCharacters);

std::string convertIntToRoman(int number)
{
    struct RomanNumeral
    {
        int value;
        std::string Character;
    };

    std::vector<RomanNumeral> romanNumerals = {
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9,  "IX"},
        {5,  "V"},
        {4,  "IV"},
        {1,  "I"}
    };
    std::string romanNumeral{};

    for (auto romanItem: romanNumerals)
    {
        addNumeral(number, romanNumeral, romanItem.value, romanItem.Character);
    }

    return romanNumeral;
}

void addNumeral(int &number, std::string &romanNumeral, int numeralValue, std::string numeralCharacters)
{
    while (number >= numeralValue)
    {
        romanNumeral += numeralCharacters;
        number -= numeralValue;
    }
}
