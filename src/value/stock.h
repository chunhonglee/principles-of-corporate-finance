#ifndef STOCK_H
#define STOCK_H

#include <vector>

namespace value
{
    /**
     * @brief Class to represent a Stock.
     */
    class Stock
    {
    private:
        std::vector<float> dividends;
        float terminalValue;
        float costOfEquity;

    public:
        /**
         * @brief Construct a new Stock instance.
         *
         * @param dividends The dividend payments at each time t.
         * @param terminalValue The terminal value of the stock.
         * @param costOfEquity The cost of equity of the stock.
         */
        Stock(std::vector<float> dividends, float terminalValue, float costOfEquity);

        /**
         * @brief Get the dividends.
         *
         * @return std::vector<float> The dividends.
         */
        std::vector<float> getDividends();

        /**
         * @brief Get the terminal value.
         *
         * @return float The terminal value.
         */
        float getTerminalValue();

        /**
         * @brief Get the cost of equity.
         *
         * @return float The cost of equity.
         */
        float getCostOfEquity();
    };

    /**
     * @brief Calculates the present value (PV) of the stock.
     *
     * @param stock The stock.
     * @return float The calculated present value of the stock.
     */
    float calculatePresentValue(Stock &stock);
}

#endif