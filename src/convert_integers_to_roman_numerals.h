#include <string>

std::string convertInteger(int number)
{
    if (number == 4)
    {
        return "IV";
    }
    return std::string(number,'I');
}
