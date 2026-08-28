#include <string>

std::string convertIntToRoman(int number)
{
    if (number == 4)
    {
        return "IV";
    }

    if (number == 5)
    {
        return "V";
    }
    
    return std::string(number,'I');
}
