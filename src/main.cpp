#include <iostream>
#include <cmath>
#include "module/example.h"
#include <vector>

namespace value {
    float calculateFutureValue(float presentValue, float r, float t) {
        float futureValue = presentValue * pow((1 + r), t);
        
        return futureValue;
    }

    float calculatePresentValue(float C, float r, float t) {
        float discountFactor = 1 / pow((1 + r), t);
        float presentValue = C * discountFactor;

        return presentValue;
    }

    float calculateNetPresentValue(float presentValue, float investment) {
        float netPresentValue = presentValue - investment;

        return netPresentValue;
    }

    float calculateDiscountedCashFlow(const std::vector<float>& C, float r) {
        int T = C.size();
        float presentValue = 0;
        for (int t = 1; t <= T; t++) {
            presentValue += calculatePresentValue(C[t-1], r, t);
        }

        return presentValue;
    }

    float calculatePerpetuityPresentValue(float C, float r, bool due = false) {
        if (std::abs(r) < std::numeric_limits<float>::epsilon()) {
            throw std::invalid_argument("Division by zero - The value r can't be 0");
        }

        float perpetuityPresentValue = C / r;
        if (due == true) {
            perpetuityPresentValue *= (1 + r);
        }

        return perpetuityPresentValue;
    }

    float calculateAnnuityPresentValue(float C, float r, float t, bool due = false) {
        if (std::abs(r) < std::numeric_limits<float>::epsilon()) {
            throw std::invalid_argument("Division by zero - The value r can't be 0");
        }

        float discountFactor = 1 / pow((1 + r), t);
        float annuityPresentValue = C/r - discountFactor * C/r;
        if (due == true) {
            annuityPresentValue *= (1 + r);
        }

        return annuityPresentValue;
    }

    float calculatePerpetuityFutureValue() {
        float perpetuityFutureValue = std::numeric_limits<float>::infinity();

        return perpetuityFutureValue;
    }

    float calculateAnnuityFutureValue(float C, float r, float t, bool due = false) {
        if (std::abs(r) < std::numeric_limits<float>::epsilon()) {
            throw std::invalid_argument("Division by zero - The value r can't be 0");
        }

        float annuity = calculateAnnuityPresentValue(C, r, t, due);
        float annuityFutureValue = annuity * pow(1 + r, t);

        return annuityFutureValue;
    }

    float calculateGrowingPerpetuityPresentValue(float C, float r, float g) {
        if (std::abs(r) < std::numeric_limits<float>::epsilon()) {
            throw std::invalid_argument("Division by zero - The value r can't be 0");
        }

        if (r <= g) {
            throw std::invalid_argument("Invalid Argument - The value of r has to be greater than g");
        }

        float perpetuityPresentValue = C / (r - g);

        return perpetuityPresentValue;
    }

    float calculateGrowingAnnuityPresentValue(float C, float r, float t, float g, bool due = false) {
        if (std::abs(r) < std::numeric_limits<float>::epsilon()) {
            throw std::invalid_argument("Division by zero - The value r can't be 0");
        }

        float annuityPresentValue = 0;
        if (std::abs(r - g) < std::numeric_limits<float>::epsilon()) {
            annuityPresentValue = C * (t / (1 + r));
        } else {
            float perpetuityPresentValue = C / (r - g);
            annuityPresentValue = perpetuityPresentValue * (1 - pow(1 + g, t) / pow(1 + r, t));
        }

        if (due == true) {
            annuityPresentValue *= 1 + r;
        }

        return annuityPresentValue;
    }

    float calculateCompoundingInterestPresentValue(float C, float r, float m = std::numeric_limits<float>::infinity(), float t = 1) {
        float presentValue = 0;
        if (std::isinf(m) == true) {
            float discountFactor = 1 / std::exp(r * t);
            presentValue = C * discountFactor;
        } else {
            float discountFactor = 1 / pow(pow(1 + (r / m), m), t);
            presentValue = C * discountFactor;
        }

        return presentValue;
    }

    float calculateCompoundingInterestFutureValue(float C, float r, float m = std::numeric_limits<float>::infinity(), float t = 1) {
        float futureValue = 0;
        if (std::isinf(m) == true) {
            futureValue = C * std::exp(r * t);
        } else {
            float compoundingInterest = pow(1 + (r / m), m);
            futureValue = C * pow(compoundingInterest, t);
        }

        return futureValue;
    }

}

int main(int argc, char** argv) {
    // float futureValue = value::calculateFutureValue(100, 0.07, 2);
    // std::cout << futureValue << "\n";

    // float presentValue = value::calculatePresentValue(114.49, 0.07, 2);
    // std::cout << presentValue << "\n";

    // float discountedCashFlow = value::calculateDiscountedCashFlow({30000, 870000}, 0.12);
    // std::cout << discountedCashFlow << "\n";

    // float perpetuity = value::calculatePerpetuityPresentValue(1000, 0.1);
    // std::cout << perpetuity << "\n";
    // float perpetuityDue = value::calculatePerpetuityPresentValue(1000, 0.1, true);
    // std::cout << perpetuityDue << "\n";

    // float annuity = value::calculateAnnuityPresentValue(5000, 0.07, 5);
    // std::cout << annuity << "\n";
    // float annuityDue = value::calculateAnnuityPresentValue(5000, 0.07, 5, true);
    // std::cout << annuityDue << "\n";

    // float perpetuityFutureValue = value::calculatePerpetuityFutureValue();
    // std::cout << perpetuityFutureValue << "\n";
    // float annuityFutureValue = value::calculateAnnuityFutureValue(20, 0.08, 5);
    // std::cout << annuityFutureValue << "\n";

    // float perpetuityPresentValue = value::calculateGrowingPerpetuityPresentValue(4, 0.08, 0.04);
    // std::cout << perpetuityPresentValue << "\n";
    // float annuityPresentValue = value::calculateGrowingAnnuityPresentValue(23.18, 0.034, 30, 0.05, true);
    // std::cout << annuityPresentValue << "\n";

    float interest = value::calculateCompoundingInterestFutureValue(1, 0.12, 12, 1);
    std::cout << interest << "\n";

    return 0;
}
