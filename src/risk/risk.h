#ifndef RISK_H
#define RISK_H

namespace risk
{
    /**
     * @brief Calculates the Sharpe Ratio. 
     * 
     * @param riskPremium The risk premium
     * @param standardDeviation The standard deviation
     * @return float The calculated Sharpe Ratio.
     */
    float calculateSharpeRatio(float riskPremium, float standardDeviation);
}

#endif