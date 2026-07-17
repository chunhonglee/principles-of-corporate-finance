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

    float Bond::calculatePresentValue()
    {
        float faceValue = this->faceValue;
        float n = this->numberOfPayments;
        float couponRate = this->couponRate / n;
        float r = this->yieldToMaturity / n;
        float t = this->timeToMaturity * n;

        float coupon = faceValue * couponRate;
        float annuity = value::calculatePresentValueAnnuity(coupon, r, t);
        float finalPrincipalPayment = value::calculatePresentValue(faceValue, r, t);
        float presentValue = annuity + finalPrincipalPayment;

        return presentValue;
    }

    float Bond::calculateDuration()
    {
        float faceValue = this->faceValue;
        float n = this->numberOfPayments;
        float couponRate = this->couponRate / n;
        float r = this->yieldToMaturity / n;
        float t = this->timeToMaturity * n;

        float coupon = faceValue * couponRate;
        float presentValue = this->calculatePresentValue();

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

    float Bond::calculateModifiedDuration()
    {
        float n = this->numberOfPayments;
        float yield = this->yieldToMaturity / n;
        float duration = this->calculateDuration();
        float modifiedDuration = duration / (1 + yield);

        return modifiedDuration;
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
}