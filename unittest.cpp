#include <iostream>
#include <gtest/gtest.h>
#include "KeplarConstant.cpp"
using ::testing::FloatLE;

class KaprekarTest : public ::testing::Test {
public:
    CsvReader *userCsvReader;
    void SetUp()
    {
        userCsvReader = new CsvReader();
    }
    void tearDown()
    {
        delete userCsvReader;
    }
};



TEST_F(KaprekarTest, StringSortAscending) {
    std::string input = "321";
    std::string expected_output = "123";
    sortDigitsDescending(input);
    EXPECT_EQ(input, expected_output);
}

TEST_F(KaprekarTest, StringSortDescending) {
    std::string input = "123";
    std::string expected_output = "321";
    sortDigitsAscending(input);
    EXPECT_EQ(input, expected_output);
}

TEST_F(KaprekarTest, swapDigits)
{
   char digit1='3';
   char digit2='4';
   swap(digit1,digit2);
   EXPECT_EQ(digit1,'4');
   EXPECT_EQ(digit2,'3');
}

// TEST_F(KaprekarTest, findDifference)
// {
//    int input = 1459;
//    int expected_output = 8082;
//    int output = findDifference(input);
//    EXPECT_EQ(output,expected_output);
// }

// TEST_F(KaprekarTest, findStepsForKaprekarConstant)
// {
//    int input = 1459;
//    int expected_output = 3;
//    int output = findStepsForKaprekarConstant(input);
//    EXPECT_EQ(output,expected_output);
// }

int main() {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}