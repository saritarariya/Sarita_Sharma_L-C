#include <gtest/gtest.h>
#include "kaprekarConstant.h"

class KaprekarTest : public ::testing::Test
{
};

TEST_F(KaprekarTest, swap)
{
    int digit1 = 31;
    int digit2 = 41;
    swap(digit1, digit2);
    EXPECT_EQ(digit1, 41);
    EXPECT_EQ(digit2, 31);
}

TEST_F(KaprekarTest, findDifference)
{
    int inputNumber = 9934;
    int expectedOutput = 6444;
    int output = findDifference(inputNumber);
    EXPECT_EQ(output, expectedOutput);
}

TEST_F(KaprekarTest, stepsForKaprekarConstant)
{
    int inputNumber = 2450;
    int expectedOutput = 8;
    int output = stepsForKaprekarConstant(inputNumber);
    EXPECT_EQ(output, expectedOutput);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
