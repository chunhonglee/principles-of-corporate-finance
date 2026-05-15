#ifndef VALUE_H
#define VALUE_H

#include <limits>
#include <vector>

namespace value
{
    /**
     * @brief Calculates the future value (FV).
     *
     * Given the present value, interest rate and time period,
     * it calculates the future value.
     *
     * @param presentValue The present value.
     * @param r The interest rate.
     * @param t The time period.
     * @return float The calculated future value.
     */
    float calculateFutureValue(float presentValue, float r, float t);

    /**
     * @brief Calculates the present value (PV).
     *
     * Given the cashflow, discount rate and time period,
     * it calculates the present value.
     *
     * @param C The cashflow at time t.
     * @param r The discount rate.
     * @param t The time period.
     * @return float The calculated present value.
     */
    float calculatePresentValue(float C, float r, float t);

    /**
     * @brief Calculates the net present value (NPV).
     *
     * Given the present value and investment,
     * calculates the net present value of the investment.
     *
     * @param presentValue The present value.
     * @param investment The investment cost.
     * @return float The calculated net present value.
     */
    float calculateNetPresentValue(float presentValue, float investment);

    /**
     * @brief Calculates the discounted cash flow (DCF).
     *
     * Given a vector of cashflows, calculates the present value of the cashflows given the discount rate.
     * Where each index i corresponds to the cashflow at the end of period i.
     *
     * @param C The cashflow at each period.
     * @param r The discount rate.
     * @return float The calculated discounted cashflows.
     */
    float calculateDiscountedCashFlow(const std::vector<float> &C, float r);

    /**
     * @brief Calculate the present value (PV) of a perpetuity.
     *
     * Given the cashflow and discount rate, calculates the present value of the perpetuity.
     * Optionally, a growth rate and if the perpetuity is due.
     *
     * @param C The cashflow for every period.
     * @param r The discount rate.
     * @param g The growth rate.
     *              Defaults to 0.
     * @param due If true, calculates the perpetuity due.
     *              Defaults to false.
     * @return float The calculated present value of the perpetuity.
     */
    float calculatePresentValuePerpetuity(float C, float r, float g = 0, bool due = false);

    /**
     * @brief Returns the future value (FV) of a perpetuity.
     *
     * Mathematically, the future value of a perpetuity is always infinite.
     *
     * @return float The future value of the perpetuity std::numeric_limits<float>::infinity().
     */
    float calculateFutureValuePerpetuity();

    /**
     * @brief Calculates the present value (PV) of an annuity.
     *
     * Given the cashflow, discount rate and number of periods, calculates the present value of the annuity.
     * Optionally, a growth rate and if the annuity is due.
     *
     * @param C The cashflow for every period t.
     * @param r The discount rate.
     * @param t The number of periods.
     * @param g The growth rate.
     *              Default to 0.
     * @param due If true, calculates the annuity due.
     *              Defaults to false.
     * @return float The calculated present value of the annuity.
     */
    float calculatePresentValueAnnuity(float C, float r, float t, float g = 0, bool due = false);

    /**
     * @brief Calculates the future value (FV) of an annuity.
     *
     * Given the cashflow, discount rate and number of periods, calculates the future value of the annuity.
     * Optionally, a growth rate and if the annuity is due.
     *
     * @param C The cashflow for every period t.
     * @param r The interest rate.
     * @param t The number of periods.
     * @param g The growth rate.
     * @param due If true, calculates the annuity due.
     *              Defaults to false.
     * @return float The calculated future value of the annuity
     */
    float calculateFutureValueAnnuity(float C, float r, float t, float g = 0, bool due = false);

    /**
     * @brief Calculates the present value (PV) of an investment, with annual percentage rate (APR).
     *
     * Given the initial investment and the annual percentage rate, calculates the present value, for a given number of years.
     *
     * @param C The initial investment.
     * @param r The annual percentage rate.
     * @param t The number of years.
     *              Defaults to 1.
     * @param m The frequency of compounding within each year t.
     *              Defaults to std::numeric_limits<float>::infinity(),
     *              which represents continuous compounding.
     * @return float
     */
    float calculatePresentValueCompoundingInterest(float C, float r, float t = 1, float m = std::numeric_limits<float>::infinity());

    /**
     * @brief Calculates the future value (FV) of an investment, with annual percentage rate (APR).
     *
     * Given the initial investment and the annual percentage rate, calculates the future value, for a given number of years.
     *
     * @param C The initial investment.
     * @param r The annual percentage rate.
     * @param t The number of years.
     *              Defaults to 1.
     * @param m The frequency of compounding within each year t.
     *              Defaults to std::numeric_limits<float>::infinity(),
     *              which represents continuous compounding
     * @return float
     */
    float calculateFutureValueCompoundingInterest(float C, float r, float t = 1, float m = std::numeric_limits<float>::infinity());

}

#endif