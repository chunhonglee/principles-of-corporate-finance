#include "financial_planning_and_working_capital_management.h"

namespace financial_planning_and_working_capital_management
{
    float calculateNetWorkingCapital(float currentAssets, float currentLiabilities)
    {
        float netWorkingCapital = currentAssets - currentLiabilities;

        return netWorkingCapital;
    }

    float calculateEBIT(float totalRevenues, float costs, float depreciation, float otherIncome)
    {
        float ebit = totalRevenues - costs - depreciation + otherIncome;

        return ebit;
    }

    float calculateMarketToBookRatio(float marketValue, float bookValue)
    {
        float marketToBookRatio = marketValue / bookValue;

        return marketToBookRatio;
    }

    float calculateEVA(float incomeEarned, float costOfCapital, float investment)
    {
        float eva = incomeEarned - (costOfCapital * investment);

        return eva;
    }

    float calculateReturnOnCapital(float interest, float netIncome, float totalCapital)
    {
        float roc = (interest + netIncome) / totalCapital;

        return roc;
    }

    float calculateReturnOnAssets(float interest, float netIncome, float totalAssets)
    {
        float roa = (interest + netIncome) / totalAssets;

        return roa;
    }

    float calculateReturnOnEquity(float netIncome, float equity)
    {
        float roe = netIncome / equity;

        return roe;
    }

    float calculateAssetTurnover(float sales, float totalAssets)
    {
        float assetTurnover = sales / totalAssets;

        return assetTurnover;
    }

    float calculateProfitMargin(float netIncome, float sales)
    {
        float profitMargin = netIncome / sales;

        return profitMargin;
    }

    float calculateOperatingProfitMargin(float interest, float netIncome, float sales)
    {
        float operatingProfitMargin = (interest + netIncome) / sales;

        return operatingProfitMargin;
    }

    float calculateInventoryTurnover(float costOfGoods, float inventory)
    {
        float inventoryTurnover = costOfGoods / inventory;

        return inventoryTurnover;
    }

    float calculateReceivablesTurnover(float sales, float receivables)
    {
        float receivableTurnover = sales / receivables;

        return receivableTurnover;
    }
}