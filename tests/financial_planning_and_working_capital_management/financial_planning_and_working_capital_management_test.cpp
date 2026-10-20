#include "gtest/gtest.h"
#include "../../src/financial_planning_and_working_capital_management/financial_planning_and_working_capital_management.h"

using namespace financial_planning_and_working_capital_management;

TEST(FinancialPlanningAndWorkingCapitalManagementTest, NetWorkingCapitalTest)
{
    float currentAssets = 10890;
    float currentLiabilities = 14243;

    float netWorkingCapital = calculateNetWorkingCapital(currentAssets, currentLiabilities);
    float result = -3353;
    float errorBound = 1;
    EXPECT_NEAR(netWorkingCapital, result, errorBound);
}

TEST(FinancialPlanningAndWorkingCapitalManagementTest, EBITTest)
{
    float totalRevenues = 122286;
    float costs = 117386;
    float depreciation = 2649;
    float otherIncome = 333;

    float ebit = calculateEBIT(totalRevenues, costs, depreciation, otherIncome);
    float result = 2584;
    float errorBound = 1;
    EXPECT_NEAR(ebit, result, errorBound);
}