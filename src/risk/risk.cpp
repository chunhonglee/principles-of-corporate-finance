#include "risk.h"

#include <iostream>

namespace risk
{
    float calculateSharpeRatio(float riskPremium, float standardDeviation)
    {
        float sharpeRatio = riskPremium / standardDeviation;

        return sharpeRatio;
    }

    float calculateExpectedReturn(float beta, float riskFreeRate, float marketRisk)
    {
        float expectedMarketRiskPremium = marketRisk - riskFreeRate;
        float expectedReturn = beta * expectedMarketRiskPremium + riskFreeRate;

        return expectedReturn;
    }

}