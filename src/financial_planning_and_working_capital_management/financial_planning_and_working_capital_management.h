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

    /**
     * @brief Calculates the Asset Turnover Ratio
     * 
     * @param sales The sales
     * @param totalAssets The total assets at start of year
     * @return float The calculated Asset Turnover Ratio
     */
    float calculateAssetTurnover(float sales, float totalAssets);

    /**
     * @brief Calculates the Profit Margin
     * 
     * @param netIncome The net income
     * @param sales The sales
     * @return float The calculated Profit Margin
     */
    float calculateProfitMargin(float netIncome, float sales);

    /**
     * @brief Calculates the Operating Profit Margin
     * 
     * @param interest The after-tax interest
     * @param netIncome The net income
     * @param sales The sales
     * @return float The calculated Operating Profit Margin
     */
    float calculateOperatingProfitMargin(float interest, float netIncome, float sales);

    /**
     * @brief Calculates the Inventory Turnover
     * 
     * @param costOfGoods The cost of goods sold
     * @param inventory The inventory at start of year
     * @return float The calculated Inventory Turnover
     */
    float calculateInventoryTurnover(float costOfGoods, float inventory);

    /**
     * @brief Calculates the Receivables Turnover
     * 
     * @param sales The sales
     * @param receivables The receivable at start of year
     * @return float The calculated Receivable Turnover
     */
    float calculateReceivablesTurnover(float sales, float receivables);

    /**
     * @brief Calculates the Long-Term Debt Ratio
     * 
     * @param debt The long-term debt
     * @param equity The equity
     * @return float The calculated Long-Term Debt Ratio
     */
    float calculateLongTermDebtRatio(float debt, float equity);

    /**
     * @brief Calculates the Long-Term Debt Equity Ratio
     * 
     * @param debt The long-term debt
     * @param equity The equity
     * @return float The calculated Long-Term Debt Equity Ratio
     */
    float calculateLongTermDebtEquityRatio(float debt, float equity);

    /**
     * @brief Calculates the Total Debt Ratio
     * 
     * @param liabilities The total liabilities
     * @param assets The total assets
     * @return float The calculated Total Debt Ratio
     */
    float calculateTotalDebtRatio(float liabilities, float assets);

    /**
     * @brief Calculates the Times Interest Earned Ratio
     * 
     * @param ebit The EBIT
     * @param interestPayments The interest payments
     * @return float The calculated Times Interest Earned Ratio
     */
    float calculateTimesInterestEarnedRatio(float ebit, float interestPayments);

    /**
     * @brief Calculates the Cash Coverage Ratio
     * 
     * @param ebit The EBIT
     * @param depreciation The depreciation
     * @param interestPayments The interest payments
     * @return float The calculated Cash Coverage Ratio
     */
    float calculateCashCoverageRatio(float ebit, float depreciation, float interestPayments);
}

#endif