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

TEST(FinancialPlanningAndWorkingCapitalManagementTest, EVATest)
{
    float incomeEarned = 1988;
    float costOfCapital = 0.055;
    float investment = 19907;

    float eva = calculateEVA(incomeEarned, costOfCapital, investment);
    float result = 893;
    float errorBound = 1;
    EXPECT_NEAR(eva, result, errorBound);
}

TEST(FinancialPlanningAndWorkingCapitalManagementTest, ROCTest)
{
    float interest = (1 - 0.21) * 603;
    float netIncome = 1512;
    float totalCapital = 19907;

    float roc = calculateReturnOnCapital(interest, netIncome, totalCapital);
    float result = 0.100;
    float errorBound = 0.001;
    EXPECT_NEAR(roc, result, errorBound);
}

TEST(FinancialPlanningAndWorkingCapitalManagementTest, ROATest)
{
    float interest = (1 - 0.21) * 603;
    float netIncome = 1512;
    float totalAssets = 38118;

    float roa = calculateReturnOnAssets(interest, netIncome, totalAssets);
    float result = 0.052;
    float errorBound = 0.001;
    EXPECT_NEAR(roa, result, errorBound);
}

TEST(FinancialPlanningAndWorkingCapitalManagementTest, ROETest)
{
    float netIncome = 1512;
    float equity = 7835;

    float roe = calculateReturnOnEquity(netIncome, equity);
    float result = 0.193;
    float errorBound = 0.001;
    EXPECT_NEAR(roe, result, errorBound);
}