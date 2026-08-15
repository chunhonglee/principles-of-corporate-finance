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