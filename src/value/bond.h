#ifndef BOND_H
#define BOND_h

namespace value
{
    /**
     * @brief Class to represent a Bond.
     */
    class Bond
    {
    private:
        float faceValue;
        float couponRate;
        float yieldToMaturity;
        float timeToMaturity;
        float numberOfPayments;

    public:
        /**
         * @brief Construct a new Bond instance.
         *
         * @param faceValue The face value of the bond.
         * @param couponRate The coupon rate of the bond.
         * @param yieldToMaturity The yield to maturity of the bond.
         * @param timeToMaturity The time to maturity of the bond.
         * @param numberOfPayments The number of interest payments each year.
         */
        Bond(float faceValue, float couponRate, float yieldToMaturity, float timeToMaturity, float numberOfPayments = 1);

        /**
         * @brief Calculates the present value (PV) of the bond.
         *
         * @return float The calculated present value of the bond.
         */
        float calculatePresentValue();

        /**
         * @brief Get the face value.
         *
         * @return float The face value.
         */
        float getFaceValue();

        /**
         * @brief Get the coupon rate.
         *
         * @return float The coupon rate.
         */
        float getCouponRate();

        /**
         * @brief Get the yield to maturity.
         *
         * @return float The yield to maturity.
         */
        float getYieldToMaturity();

        /**
         * @brief Get the time to maturity.
         *
         * @return float The time to maturity.
         */
        float getTimeToMaturity();

        /**
         * @brief Get the number of payments.
         *
         * @return float The number of payments.
         */
        float getNumberOfPayments();
    };
}

#endif