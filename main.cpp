#include <iostream>
#include <string>
#include "KeplarConstant.cpp"

int main()
{
    int inputNumber;
    std::cout << "Enter a four digit number:-";
    std::cin >> inputNumber;

    if (inputNumber < 1000 || inputNumber > 9999)
    {
        std::cout << "Please enter a valid four-digit number." << std::endl;
        return 1;
    }

    int iterations = kaprekarIterations(inputNumber);
    if (iterations > 7)
    {
        std::cout << "Number of iterations to reach Kaprekar's Constant is more than : " << iterations << std::endl;
    }
    else
    {
        std::cout << "Number of iterations to reach Kaprekar's Constant: " << iterations << std::endl;
    }

    return 0;
}