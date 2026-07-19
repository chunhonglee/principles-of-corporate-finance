#include "bond.h"
#include "value.h"

namespace value
{
    Bond::Bond(float faceValue, float couponRate, float yieldToMaturity, float timeToMaturity, float numberOfPayments)
    {
        this->faceValue = faceValue;
        this->couponRate = couponRate;
        this->yieldToMaturity = yieldToMaturity;
        this->timeToMaturity = timeToMaturity;
        this->numberOfPayments = numberOfPayments;
    }

    float Bond::getFaceValue()
    {
        return this->faceValue;
    }

    float Bond::getCouponRate()
    {
        return this->couponRate;
    }

    float Bond::getYieldToMaturity()
    {
        return this->yieldToMaturity;
    }

    float Bond::getTimeToMaturity()
    {
        return this->timeToMaturity;
    }

    float Bond::getNumberOfPayments()
    {
        return this->numberOfPayments;
    }

    float calculatePresentValue(Bond &bond)
    {
        float faceValue = bond.getFaceValue();
        float n = bond.getNumberOfPayments();
        float couponRate = bond.getCouponRate() / n;
        float r = bond.getYieldToMaturity() / n;
        float t = bond.getTimeToMaturity() * n;

        float coupon = faceValue * couponRate;
        float annuity = value::calculatePresentValueAnnuity(coupon, r, t);
        float finalPrincipalPayment = value::calculatePresentValue(faceValue, r, t);
        float presentValue = annuity + finalPrincipalPayment;

        return presentValue;
    }

    float calculateDuration(Bond &bond)
    {
        float faceValue = bond.getFaceValue();
        float n = bond.getNumberOfPayments();
        float couponRate = bond.getCouponRate() / n;
        float r = bond.getYieldToMaturity() / n;
        float t = bond.getTimeToMaturity() * n;

        float coupon = faceValue * couponRate;
        float presentValue = value::calculatePresentValue(bond);

        float couponsValue = 0;
        for (int i = 1; i <= t; i++)
        {
            couponsValue += i * value::calculatePresentValue(coupon, r, i);
        }
        float principalValue = t * value::calculatePresentValue(faceValue, r, t);

        float duration = couponsValue + principalValue;
        duration /= presentValue;
        duration /= n;

        return duration;
    }

    float calculateModifiedDuration(Bond &bond)
    {
        float n = bond.getNumberOfPayments();
        float yield = bond.getYieldToMaturity() / n;
        float duration = value::calculateDuration(bond);
        float modifiedDuration = duration / (1 + yield);

        return modifiedDuration;
    }

}