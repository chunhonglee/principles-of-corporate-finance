#include "payout_policy_and_capital_structure.h"

namespace payout_policy_and_capital_structure
{
    float calculateAfterTaxWACC(float TC, float rD, float D, float rE, float E)
    {
        float V = D + E;
        float afterTaxWACC = rD * (1 - TC) * (D / V) + rE * (E / V);

        return afterTaxWACC;
    }
}