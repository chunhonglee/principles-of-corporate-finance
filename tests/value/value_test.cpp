#include <iostream>

#include "gtest/gtest.h"
#include "../../src/value/value.h"

TEST(ValueTest, ValidFutureValue)
{
    float presentValue = 100;
    float r = 0.07;
    float t = 2;

    float futureValue = value::calculateFutureValue(presentValue, r, t);
    float result = 114.49;
    EXPECT_FLOAT_EQ(futureValue, result);
}

TEST(ValueTest, ValidPresentValue)
{
    float C = 114.49;
    float r = 0.07;
    float t = 2;

    float presentValue = value::calculatePresentValue(C, r, t);
    float result = 100;
    EXPECT_FLOAT_EQ(presentValue, result);
}

TEST(ValueTest, ValidNetPresentValue)
{
    float presentValue = 747664;
    float investment = 700000;

    float netPresentValue = value::calculateNetPresentValue(presentValue, investment);
    float result = 47664;
    EXPECT_FLOAT_EQ(netPresentValue, result);
}

TEST(ValueTest, ValidDiscountedCashFlow)
{
    std::vector<float> C = {30000, 870000};
    float r = 0.12;

    float discountedCashFlow = value::calculateDiscountedCashFlow(C, r);
    float result = 720344;
    float errorBound = 1;
    EXPECT_NEAR(discountedCashFlow, result, errorBound);
}

TEST(ValueTest, ValidPresentValuePerpetuity)
{
    float C = 100;
    float r = 0.1;

    float presentValuePerpetuity = value::calculatePresentValuePerpetuity(C, r);
    float result = 1000;
    EXPECT_FLOAT_EQ(presentValuePerpetuity, result);
}

TEST(ValueTest, ValidFutureValuePerpetuity)
{
    float futureValuePerpetuity = value::calculateFutureValuePerpetuity();
    float result = std::numeric_limits<float>::infinity();
    EXPECT_FLOAT_EQ(futureValuePerpetuity, result);
}

TEST(ValueTest, ValidPresentValueAnnuity)
{
    float C = 5;
    float r = 0.07;
    float t = 5;

    float presentValueAnnuity = value::calculatePresentValueAnnuity(C, r, t);
    float result = 20.501;
    float errorBound = 0.001;
    EXPECT_NEAR(presentValueAnnuity, result, errorBound);
}

TEST(ValueTest, ValidFutureValueAnnuity)
{
    float C = 20000;
    float r = 0.08;
    float t = 5;

    float futureValueAnnuity = value::calculateFutureValueAnnuity(C, r, t);
    float result = 117332;
    float errorBound = 1;
    EXPECT_NEAR(futureValueAnnuity, result, errorBound);
}

TEST(ValueTest, ValidPresentValueCompoundingInterest)
{
    float C = 1.1163;
    float r = 0.11;

    float presentValueCompoundingInterest = value::calculatePresentValueCompoundingInterest(C, r);
    float result = 1;
    float errorBound = 1;
    EXPECT_NEAR(presentValueCompoundingInterest, result, errorBound);
}

TEST(ValueTest, ValidFutureValueCompoundingInterest)
{
    float C = 1;
    float r = 0.11;
    float t = 2;

    float futureValueCompoundingInterest = value::calculateFutureValueCompoundingInterest(C, r, t);
    float result = 1.2461;
    float errorBound = 0.0001;
    EXPECT_NEAR(futureValueCompoundingInterest, result, errorBound);
}