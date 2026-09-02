#include <string>

void addNumeral(int &number, std::string &romanNumeral, int numeralValue, std::string numeralCharacters);

std::string convertIntToRoman(int number)
{
    std::string romanNumeral{};

    addNumeral(number, romanNumeral, 40, "XL");
    
    addNumeral(number, romanNumeral, 10, "X");

    addNumeral(number, romanNumeral, 9, "IX");

    addNumeral(number, romanNumeral, 5, "V");

    addNumeral(number, romanNumeral, 4, "IV");

    addNumeral(number, romanNumeral, 1, "I");

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
