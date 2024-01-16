#include "kaprekarConstant.h"

int main()
{
    int number;
    std::cin >> number;
    if (number < 1000 || number > 9999)
    {
        std::cout << "Please enter a valid four-digit number." << std::endl;
        return 1;
    }
    int kaprekarSteps = stepsForKaprekarConstant(number);

    if (kaprekarSteps != 0)
    {
        std::cout << kaprekarSteps << " are neded " << std::endl;
    }
    else
    {
        std::cout << "This " << number << " does not reach kaprekar's constant" << std::endl;
    }
    return 0;
}