#ifndef FINANCIAL_PLANNING_AND_WORKING_CAPITAL_MANAGEMENT_H
#define FINANCIAL_PLANNING_AND_WORKING_CAPITAL_MANAGEMENT_H

namespace financial_planning_and_working_capital_management
{
    /**
     * @brief Calculates the Net Working Capital
     *
     * @param currentAssets The value of current assets
     * @param currentLiabilities The value of current liabilities
     * @return float The calculates Net Working Capital value
     */
    float calculateNetWorkingCapital(float currentAssets, float currentLiabilities);

    /**
     * @brief Calculates the Earnings Before Interest and Taxes (EBIT) value
     *
     * @param totalRevenues The total revenues
     * @param costs The total costs
     * @param depreciation The total depreciation
     * @param otherIncome Other income
     * @return float The calculated EBIT value
     */
    float calculateEBIT(float totalRevenues, float costs, float depreciation, float otherIncome);

    /**
     * @brief Calculates the Market-to-Book Ratio
     *
     * @param marketValue The market value of equity
     * @param bookValue The book value of equity
     * @return float The calculated Market-to-Book Ratio
     */
    float calculateMarketToBookRatio(float marketValue, float bookValue);

    /**
     * @brief Calculates the Economic Value Added (EVA)
     *
     * @param incomeEarned The income earned
     * @param costOfCapital The cost of capital
     * @param investment The investment cost
     * @return float The calculated EVA value
     */
    float calculateEVA(float incomeEarned, float costOfCapital, float investment);

    /**
     * @brief Calculates the Return on Capital (ROC)
     *
     * @param interest The after-tax interest
     * @param netIncome The net income
     * @param totalCapital The total capital
     * @return float The calculated ROC value
     */
    float calculateReturnOnCapital(float interest, float netIncome, float totalCapital);

    /**
     * @brief Calculates the Return on Assets (ROA)
     *
     * @param interest The after-tax interest
     * @param netIncome The net income
     * @param totalAssets The total assets
     * @return float The calculated ROA value
     */
    float calculateReturnOnAssets(float interest, float netIncome, float totalAssets);

    /**
     * @brief Calculates the Return on Equity (ROE)
     *
     * @param netIncome The net income
     * @param equity The equity
     * @return float The calculated ROE value
     */
    float calculateReturnOnEquity(float netIncome, float equity);

}

#endif