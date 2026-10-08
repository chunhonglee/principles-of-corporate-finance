#include "capital_budgeting.h"

namespace capital_budgeting
{

    float calculateDOL(float fixedCosts, float profits)
    {
        float DOL = 1 + fixedCosts / profits;

        return DOL;
    }

    float calculateEconomicIncomeAtTimeT(float C, float PV_today, float PV_before)
    {
        float economicIncome = C + (PV_today - PV_before);

        return economicIncome;
    }

    float calculateEconomicRent(float economicIncome, float costOfCapital)
    {
        float economicRent = economicIncome - costOfCapital;

        return economicRent;
    }
}