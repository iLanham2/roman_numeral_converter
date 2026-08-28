#include <string>

std::string convertIntToRoman(int number)
{
    std::string romanNumeral{};

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
