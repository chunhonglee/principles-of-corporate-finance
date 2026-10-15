#ifndef PAYOUT_POLICY_AND_CAPITAL_STRUCTURE_H
#define PAYOUT_POLICY_AND_CAPITAL_STRUCTURE_H

namespace payout_policy_and_capital_structure
{
    /**
     * @brief Calculates the After-Tax Weighted Average Cost of Capital (WACC)
     * 
     * @param TC The corporate tax rate
     * @param rD The expected return on debt
     * @param D The market value of debt
     * @param rE The expected return on equity
     * @param E The market value of equity
     * @return float The calcuclated After-Tax WACC value
     */
    float calculateAfterTaxWACC(float TC, float rD, float D, float rE, float E);

    /**
     * @brief Calculates the Tax Shield
     * 
     * @param TC The corporate tax rate
     * @param D The market value of debt
     * @return float The calculated Tax Shield
     */
    float calculateTaxShield(float TC, float D);
}

#endif