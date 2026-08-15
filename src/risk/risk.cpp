#include "risk.h"

#include <iostream>

namespace risk
{
    float calculateSharpeRatio(float riskPremium, float standardDeviation)
    {
        float sharpeRatio = riskPremium / standardDeviation;

        return sharpeRatio;
    }
}