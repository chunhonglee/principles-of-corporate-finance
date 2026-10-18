#ifndef RISK_MANAGEMENT_H
#define RISK_MANAGEMENT_H

namespace risk_management
{
    /**
     * @brief Calculates the Futures Price at lasting t periods
     * 
     * @param spotPrice The spot price at time 0
     * @param riskFreeRate The risk-free rate
     * @param dividendYield The dividend yield
     * @param t The number lasting periods
     * @return float The calculated Futures Price
     */
    float calculateFuturesPrice(float spotPrice, float riskFreeRate, float dividendYield, float t);
}

#endif