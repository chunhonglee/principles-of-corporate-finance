#include "value.h"

#include <cmath>
#include <iostream>

namespace value
{
    float calculateFutureValue(float presentValue, float r, float t)
    {
        float futureValue = presentValue * pow((1 + r), t);

        return futureValue;
    }

    float calculatePresentValue(float C, float r, float t)
    {
        float discountFactor = 1 / pow((1 + r), t);
        float presentValue = C * discountFactor;

        return presentValue;
    }

    float calculateNetPresentValue(float presentValue, float investment)
    {
        float netPresentValue = presentValue - investment;

        return netPresentValue;
    }

    float calculateDiscountedCashFlow(const std::vector<float> &C, float r)
    {
        int T = C.size();
        float presentValue = 0;
        for (int t = 1; t <= T; t++)
        {
            presentValue += calculatePresentValue(C[t - 1], r, t);
        }

        return presentValue;
    }

    float calculatePresentValuePerpetuity(float C, float r, float g, bool due)
    {
        if (std::abs(r) < std::numeric_limits<float>::epsilon())
        {
            throw std::invalid_argument("Division by zero - The value r can't be 0");
        }

        if (r <= g)
        {
            throw std::invalid_argument("Invalid Argument - The value of r has to be greater than g");
        }

        float perpetuityPresentValue = C / (r - g);
        if (due == true)
        {
            perpetuityPresentValue *= (1 + r);
        }

        return perpetuityPresentValue;
    }

    float calculateFutureValuePerpetuity()
    {
        float perpetuityFutureValue = std::numeric_limits<float>::infinity();

        return perpetuityFutureValue;
    }

    float calculatePresentValueAnnuity(float C, float r, float t, float g, bool due)
    {
        if (std::abs(r) < std::numeric_limits<float>::epsilon())
        {
            throw std::invalid_argument("Division by zero - The value r can't be 0");
        }

        float annuityPresentValue = 0;
        if (std::abs(r - g) < std::numeric_limits<float>::epsilon())
        {
            annuityPresentValue = C * (t / (1 + r));
        }
        else
        {
            float perpetuityPresentValue = C / (r - g);
            annuityPresentValue = perpetuityPresentValue * (1 - pow(1 + g, t) / pow(1 + r, t));
        }

        if (due == true)
        {
            annuityPresentValue *= 1 + r;
        }

        return annuityPresentValue;
    }

    float calculateFutureValueAnnuity(float C, float r, float t, float g, bool due)
    {
        if (std::abs(r) < std::numeric_limits<float>::epsilon())
        {
            throw std::invalid_argument("Division by zero - The value r can't be 0");
        }

        float annuity = calculatePresentValueAnnuity(C, r, t, g, due);
        float annuityFutureValue = annuity * pow(1 + r, t);

        return annuityFutureValue;
    }

    float calculatePresentValueCompoundingInterest(float C, float r, float t, float m)
    {
        float presentValue = 0;
        if (std::isinf(m) == true)
        {
            float discountFactor = 1 / std::exp(r * t);
            presentValue = C * discountFactor;
        }
        else
        {
            float discountFactor = 1 / pow(pow(1 + (r / m), m), t);
            presentValue = C * discountFactor;
        }

        return presentValue;
    }

    float calculateFutureValueCompoundingInterest(float C, float r, float t, float m)
    {
        float futureValue = 0;
        if (std::isinf(m) == true)
        {
            futureValue = C * std::exp(r * t);
        }
        else
        {
            float compoundingInterest = pow(1 + (r / m), m);
            futureValue = C * pow(compoundingInterest, t);
        }

        return futureValue;
    }

}