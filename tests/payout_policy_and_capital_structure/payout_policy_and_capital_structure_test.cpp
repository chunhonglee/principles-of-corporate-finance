#include "gtest/gtest.h"
#include "../../src/payout_policy_and_capital_structure/payout_policy_and_capital_structure.h"

using namespace payout_policy_and_capital_structure;

TEST(PayoutPolicyAndCapitalStructureTest, AfterTaxWACC)
{
    float TC = 0.21;
    float rD = 0.034;
    float D = 0.22;
    float rE = 0.103;
    float E = 0.78;

    float afterTaxWacc = calculateAfterTaxWACC(TC, rD, D, rE, E);
    float result = 0.086;
    float errorBound = 0.001;
    EXPECT_NEAR(afterTaxWacc, result, errorBound);
}