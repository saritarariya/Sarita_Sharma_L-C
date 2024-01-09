#include <iostream>
#include <string>
#include "KeplarSolver.h"

void swap(char &firstChar, char &secondChar)
{
    char tempChar = firstChar;
    firstChar = secondChar;
    secondChar = tempChar;
}

void sortDigitsDescending(std::string &numberAsString)
{
    int number = numberAsString.size();
    for (int index = 0; index < number - 1; index++)
    {
        for (int counter = index + 1; counter < number; counter++)
        {
            if (numberAsString[index] < numberAsString[counter])
            {
                swap(numberAsString[index], numberAsString[counter]);
            }
        }
    }
}

void sortDigitsAscending(std::string &numberAsString)
{
    int number = numberAsString.size();
    for (int index = 0; index < number - 1; index++)
    {
        for (int counter = index + 1; counter < number; counter++)
        {
            if (numberAsString[index] > numberAsString[counter])
            {
                swap(numberAsString[index], numberAsString[counter]);
            }
        }
    }
}

int stringToInt(const std::string &numberAsString)
{
    int number = 0;
    for (int index = 0; index < numberAsString.length(); index++)
    {
        number = number * 10 + (numberAsString[index] - '0');
    }

    return number;
}

int kaprekarOperation(int number)
{
    std::string numberInString = std::to_string(number);
    while (numberInString.size() < 4)
    {
        numberInString = "0" + numberInString;
    }

    sortDigitsDescending(numberInString);
    int descendingNumber = stringToInt(numberInString);

    sortDigitsAscending(numberInString);
    int ascendingNumber = stringToInt(numberInString);

    return descendingNumber - ascendingNumber;
}

int kaprekarIterations(int number)
{
    int iterations = 0;
    while (number != KaprekarConstant && iterations < 8)
    {
        number = kaprekarOperation(number);
        iterations++;
    }
    return iterations;
}
