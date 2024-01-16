#include <iostream>
#include <algorithm>

void swap(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void sortDigits(int *digits)
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3 - i; ++j)
        {
            if (digits[j] > digits[j + 1])
            {
                std::swap(digits[j], digits[j + 1]);
            }
        }
    }
}

int findDifference(int number)
{
    int digits[4];
    for (int i = 3; i >= 0; --i)
    {
        digits[i] = number % 10;
        number /= 10;
    }
    sortDigits(digits);
    int ascendingNumber = 0;
    for (int i = 0; i < 4; ++i)
    {
        ascendingNumber = ascendingNumber * 10 + digits[i];
    }

    int descendingNumber = 0;
    for (int i = 3; i >= 0; --i)
    {
        descendingNumber = descendingNumber * 10 + digits[i];
    }
    int difference = descendingNumber - ascendingNumber;
    return difference;
}

int stepsForKaprekarConstant(int number)
{
    int currentNumber = number;

    for (int steps = 1; steps < 8 && currentNumber != 6174; steps++)
    {
        currentNumber = findDifference(currentNumber);

        if (currentNumber == 6174)
        {
            return steps + 1;
        }
    }
    return 0;
}