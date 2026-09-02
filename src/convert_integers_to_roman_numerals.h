#include <string>

void addNumeral(int &number, std::string &romanNumeral);

std::string convertIntToRoman(int number)
{
    std::string romanNumeral{};

    addNumeral(number, romanNumeral);

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

void addNumeral(int &number, std::string &romanNumeral)
{
    if (number >= 10)
    {
        romanNumeral += "X";
        number -= 10;
    }
}
