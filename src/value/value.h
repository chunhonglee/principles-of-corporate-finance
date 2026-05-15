#ifndef VALUE_H
#define VALUE_H

#include <limits>
#include <vector>

namespace value
{
    float calculateFutureValue(float presentValue, float r, float t);

    float calculatePresentValue(float C, float r, float t);

    float calculateNetPresentValue(float presentValue, float investment);

    float calculateDiscountedCashFlow(const std::vector<float> &C, float r);

    float calculatePerpetuityPresentValue(float C, float r, float g, bool due = false);

    float calculatePerpetuityFutureValue();

    float calculateAnnuityPresentValue(float C, float r, float t, float g, bool due = false);

    float calculateAnnuityFutureValue(float C, float r, float t, bool due = false);

    float calculateCompoundingInterestPresentValue(float C, float r, float m = std::numeric_limits<float>::infinity(), float t = 1);

    float calculateCompoundingInterestFutureValue(float C, float r, float m = std::numeric_limits<float>::infinity(), float t = 1);

}

#endif