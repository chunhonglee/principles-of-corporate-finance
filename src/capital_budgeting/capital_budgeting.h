#ifndef CAPITAL_BUDGETING_H
#define CAPITAL_BUDGETING_H

namespace capital_budgeting
{
    /**
     * @brief Calculates the Degree of Operating Leverage (DOL)
     *
     * @param fixedCosts The fixed costs including depreciation
     * @param profits The pretax profits
     * @return float The calculated DOL value
     */
    float calculateDOL(float fixedCosts, float profits);

    /**
     * @brief Calculates the Economic Income at time T
     *
     * @param C The cash flow at time t
     * @param PV_today The present value (PV) at time t
     * @param PV_before The present value (PV) at time t - 1
     * @return float The calculated Economic Income
     */
    float calculateEconomicIncomeAtTimeT(float C, float PV_today, float PV_before);

    /**
     * @brief Calculates the Economic Rent
     *
     * @param economicIncome The actual economic income
     * @param costOfCapital The cost of capital
     * @return float The calculated Economic Rent
     */
    float calculateEconomicRent(float economicIncome, float costOfCapital);
}

#endif