#include <string>

std::string convertIntToRoman(int number)
{
    if (number == 4)
    {
        return "IV";
    }
    return std::string(number,'I');
}
