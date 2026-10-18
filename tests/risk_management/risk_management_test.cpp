#include "gtest/gtest.h"
#include "../../src/risk_management/risk_management.h"

using namespace risk_management;

TEST(RiskManagementTest, FuturesPrice)
{
    float spotPrice = 4500;
    float riskFreeRate = 0.005;
    float dividendYield = 0.014;
    float t = 1;

    float futuresPrice = calculateFuturesPrice(spotPrice, riskFreeRate, dividendYield, t);
    float result = 4459.50;
    float errorBound = 0.01;
    EXPECT_NEAR(futuresPrice, result, errorBound);
}