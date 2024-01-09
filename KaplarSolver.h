
#ifndef KAPREKAR_SOLVER_H
#define KAPREKAR_SOLVER_H

#include <iostream>
#include <string>

class KaplarSolver {
public:
    static const int KaprekarConstant = 6174;

    static void swap(char &firstChar, char &secondChar);
    static void sortDigitsDescending(std::string &numberAsString);
    static void sortDigitsAscending(std::string &numberAsString);
    static int stringToInt(const std::string &numberAsString);
    static int kaprekarOperation(int number);
    static int kaprekarIterations(int number);
};

#endif 
