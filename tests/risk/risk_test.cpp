#include "gtest/gtest.h"
#include "../../src/risk/risk.h"

TEST(RiskTest, ValidSharpeRatio)
{
    float riskPremium = 4;
    float standardDeviation = 2;

    float sharpeRatio = risk::calculateSharpeRatio(riskPremium, standardDeviation);
    float result = 2.0;
    EXPECT_FLOAT_EQ(sharpeRatio, result);
}

TEST(RiskTest, ValidExpectedReturn)
{
    float beta = 2.98;
    float riskFreeRate = 0.02;
    float marketRisk = 0.09;

    float expectedReturn = risk::calculateExpectedReturn(beta, riskFreeRate, marketRisk);
    float result = 0.229;
    float errorBound = 0.001;
    EXPECT_NEAR(expectedReturn, result, errorBound);
}