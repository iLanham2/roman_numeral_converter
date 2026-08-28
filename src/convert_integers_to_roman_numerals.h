#include <string>

std::string convertInteger(int number)
{
    if (number == 1)
    {
        return "I";
    }

    if (number == 2)
    {
       return "II";
    }
    return "III";
}
