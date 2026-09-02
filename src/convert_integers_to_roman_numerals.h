#include <string>

void addNumeral(int &number, std::string &romanNumeral, int numeralValue, std::string numeralCharacters);

std::string convertIntToRoman(int number)
{
    std::string romanNumeral{};

    addNumeral(number, romanNumeral, 10, "X");

    if (number >= 9)
    {
        romanNumeral += "IX";
        number -= 9;
    }

    if (number >= 5)
    {
        romanNumeral += "V";
        number -= 5;
    }

    if (number >= 4)
    {
        romanNumeral += "IV";
        number -= 4;
    }

    return (romanNumeral + std::string(number,'I'));
}

void addNumeral(int &number, std::string &romanNumeral, int numeralValue, std::string numeralCharacters)
{
    if (number >= numeralValue)
    {
        romanNumeral += numeralCharacters;
        number -= numeralValue;
    }
}
