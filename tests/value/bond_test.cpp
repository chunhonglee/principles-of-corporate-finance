#include <iostream>

#include "gtest/gtest.h"
#include "../../src/value/bond.h"

TEST(BondTest, ValidBondOnePayment)
{
    float faceValue = 100;
    float couponRate = 0.035;
    float yieldToMaturity = 0.05;
    float timeToMaturity = 6;
    float numberOfPayments = 1;

    value::Bond bond = value::Bond(faceValue, couponRate, yieldToMaturity, timeToMaturity, numberOfPayments);
    float presentValue = bond.calculatePresentValue();
    float result = 92.39;
    float errorBound = 0.01;
    EXPECT_NEAR(presentValue, result, errorBound);
}

TEST(BondTest, ValidBondTwoPayments)
{
    float faceValue = 1000;
    float couponRate = 0.0125;
    float yieldToMaturity = 0.00252;
    float timeToMaturity = 8;
    float numberOfPayments = 2;

    value::Bond bond = value::Bond(faceValue, couponRate, yieldToMaturity, timeToMaturity, numberOfPayments);
    float presentValue = bond.calculatePresentValue();
    float result = 1089.41;
    float errorBound = 0.01;
    EXPECT_NEAR(presentValue, result, errorBound);
}