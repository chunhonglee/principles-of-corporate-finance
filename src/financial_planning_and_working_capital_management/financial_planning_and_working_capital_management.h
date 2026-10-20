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
}

#endif