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

TEST(FinancialPlanningAndWorkingCapitalManagementTest, AssetTurnoverTest)
{
    float sales = 122286;
    float totalAssets = 38118;

    float assetTurnover = calculateAssetTurnover(sales, totalAssets);
    float result = 3.21;
    float errorBound = 0.01;
    EXPECT_NEAR(assetTurnover, result, errorBound);
}

TEST(FinancialPlanningAndWorkingCapitalManagementTest, ProfitMarginTest)
{
    float netIncome = 1512;
    float sales = 122286;

    float profitMargin = calculateProfitMargin(netIncome, sales);
    float result = 0.0124;
    float errorBound = 0.0001;
    EXPECT_NEAR(profitMargin, result, errorBound);
}

TEST(FinancialPlanningAndWorkingCapitalManagementTest, OperatingProfitMarginTest)
{
    float interest = (1 - 0.21) * 603;
    float netIncome = 1512;
    float sales = 122286;

    float operatingProfitMargin = calculateOperatingProfitMargin(interest, netIncome, sales);
    float result = 0.0163;
    float errorBound = 0.0001;
    EXPECT_NEAR(operatingProfitMargin, result, errorBound);
}

TEST(FinancialPlanningAndWorkingCapitalManagementTest, InventoryTurnoverTest)
{
    float costOfGoods = 95294;
    float inventory = 6846;

    float inventoryTurnover = calculateInventoryTurnover(costOfGoods, inventory);
    float result = 13.9;
    float errorBound = 0.1;
    EXPECT_NEAR(inventoryTurnover, result, errorBound);
}

TEST(FinancialPlanningAndWorkingCapitalManagementTest, ReceivablesTurnoverTest)
{
    float sales = 122286;
    float receivables = 1589;

    float receivablesTurnover = calculateReceivablesTurnover(sales, receivables);
    float result = 77.0;
    float errorBound = 0.1;
    EXPECT_NEAR(receivablesTurnover, result, errorBound);
}