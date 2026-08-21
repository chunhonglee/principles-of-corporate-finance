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

    /**
     * @brief Calculates the Expected Return of a Stock using the Capital Asset Pricing Model (CAPM).
     *
     * @param beta The beta of the stock with the market
     * @param riskFreeRate The risk free rate
     * @param marketRisk The market risk
     * @return float The calculated Expected Return
     */
    float calculateExpectedReturn(float beta, float riskFreeRate, float marketRisk);
}

#endif