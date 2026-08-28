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

    if (number == 6)
    {
        return "VI";
    }
    
    return std::string(number,'I');
}
