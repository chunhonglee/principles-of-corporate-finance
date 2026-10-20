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
}