#include "risk_management.h"
#include <cmath>

namespace risk_management
{
    float calculateFuturesPrice(float spotPrice, float riskFreeRate, float dividendYield, float t)
    {
        float futuresPrice = spotPrice * std::pow((1 + riskFreeRate - dividendYield), t);

        return futuresPrice;
    }
}