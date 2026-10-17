#ifndef OPTIONS_H
#define OPTIONS_H

namespace options
{
    enum class OptionType
    {
        Call,
        Put
    };

    struct Option
    {
        OptionType type;
        float exercisePrice;
    };

    /**
     * @brief Calculates the Price at Maturity for an option
     *
     * @param option The option
     * @param stockPrice The stock price at maturity
     * @return float The calculated price at maturity
     */
    float calculatePriceAtMaturity(const Option &option, float stockPrice);

    /**
     * @brief Calculates the value of an option using the Black-Scholes Formula
     *
     * @param option The option
     * @param stockPrice The stock price S
     * @param riskFreeRate The risk free rate r
     * @param timeToMaturity The time to maturity T
     * @param volatility The volatility sigma
     * @return float The value of the option
     */
    float calculatePriceOfOption(const Option &option, float stockPrice, float riskFreeRate, float timeToMaturity, float volatility);

    /**
     * @brief Helper function to calculate the Cumulative Standard Normal Distribution (CDF)
     *
     * @param x The input value
     * @return float The corresponding CFG
     */
    float standardNormalCFG(float x);
}

#endif