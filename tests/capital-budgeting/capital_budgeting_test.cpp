#include "gtest/gtest.h"
#include "../../src/capital-budgeting/capital_budgeting.h"

TEST(CapitalBudgetingTest, DOL)
{
    float fixedCosts = 6.0;
    float profits = 1.72;

    float DOL = capital_budgeting::calculateDOL(fixedCosts, profits);
    float result = 4.50;
    float errorBound = 0.1;
    EXPECT_NEAR(DOL, result, errorBound);
}

TEST(CapitalBudgetingTest, EconomicIncome)
{
    float C = 5;
    float PV_today = 60;
    float PV_before = 50;

    float economicIncome = capital_budgeting::calculateEconomicIncomeAtTimeT(C, PV_today, PV_before);
    float result = 15;
    EXPECT_FLOAT_EQ(economicIncome, result);
}

TEST(CapitalBudgetingTest, EconomicRent)
{
    float economicIncome = 15;
    float costOfCapital = 5;

    float economicRent = capital_budgeting::calculateEconomicRent(economicIncome, costOfCapital);
    float result = 10;
    EXPECT_FLOAT_EQ(economicRent, result);
}