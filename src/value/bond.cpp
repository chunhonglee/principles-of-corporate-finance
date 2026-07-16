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
        float couponRate = this->couponRate;
        float r = this->yieldToMaturity / this->numberOfPayments;
        float t = this->timeToMaturity;

        float coupon = faceValue * couponRate;
        float annuity = value::calculatePresentValueAnnuity(coupon, r, t);
        float finalPrincipalPayment = value::calculatePresentValue(faceValue, r, t);
        float presentValue = annuity + finalPrincipalPayment;

        return presentValue;
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