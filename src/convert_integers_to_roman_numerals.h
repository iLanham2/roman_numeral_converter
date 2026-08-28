#include <string>

std::string convertIntToRoman(int number)
{
    std::string romanNumeral{};

    if (number == 10)
    {
        return "X";
    }

    if (number == 9)
    {
        return "IX";
    }

    if (number >= 5)
    {
        romanNumeral += "V";
        number -= 5;
    }

    if (number == 4)
    {
        return "IV";
    }

    return (romanNumeral + std::string(number,'I'));
}
