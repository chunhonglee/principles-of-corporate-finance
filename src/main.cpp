#include <iostream>
#include <cmath>
#include "module/example.h"
#include <vector>

namespace Value {
    float calculateFutureValue(float presentValue, float r, int t) {
        float futureValue = presentValue * pow((1 + r), t);
        
        return futureValue;
    }

    float calculatePresentValue(float C, float r, int t) {
        float discountFactor = 1 / pow((1 + r), t);
        float presentValue = C * discountFactor;

        return presentValue;
    }

    float calculateNetPresentValue(float presentValue, float investment) {
        float netPresentValue = presentValue - investment;

        return netPresentValue;
    }

    float calculateDiscountedCashFlow(std::vector<float> C, float r) {
        int T = C.size();
        float presentValue = 0;
        for (int t = 1; t <= T; t++) {
            presentValue += calculatePresentValue(C[t-1], r, t);
        }

        return presentValue;
    }

    float calculatePerpetuityPresentValue(float C, float r, bool due = false) {
        float perpetuity = C / r;
        if (due == true) {
            perpetuity *= (1 + r);
        }

        return perpetuity;
    }

    float calculateAnnuityPresentValue(float C, float r, int t, bool due = false) {
        float discountFactor = 1 / pow((1 + r), t);
        float annuity = C/r - discountFactor * C / r;
        if (due == true) {
            annuity *= (1 + r);
        }

        return annuity;
    }

    float calculatePerpetuityFutureValue() {
        float perpetuityFutureValue = std::numeric_limits<float>::infinity();

        return perpetuityFutureValue;
    }

    float calculateAnnuityFutureValue(float C, float r, int t, bool due = false) {
        float annuity = calculateAnnuityPresentValue(C, r, t, due);
        float annuityFutureValue = annuity * pow(1 + r, t);

        return annuityFutureValue;
    }

}

int main(int argc, char** argv) {
    // float futureValue = Value::calculateFutureValue(100, 0.07, 2);
    // std::cout << futureValue << "\n";

    // float presentValue = Value::calculatePresentValue(114.49, 0.07, 2);
    // std::cout << presentValue << "\n";

    // float discountedCashFlow = Value::calculateDiscountedCashFlow({30000, 870000}, 0.12);
    // std::cout << discountedCashFlow << "\n";

    // float perpetuity = Value::calculatePerpetuityPresentValue(1000, 0.1);
    // std::cout << perpetuity << "\n";
    // float perpetuityDue = Value::calculatePerpetuityPresentValue(1000, 0.1, true);
    // std::cout << perpetuityDue << "\n";

    // float annuity = Value::calculateAnnuityPresentValue(5000, 0.07, 5);
    // std::cout << annuity << "\n";
    // float annuityDue = Value::calculateAnnuityPresentValue(5000, 0.07, 5, true);
    // std::cout << annuityDue << "\n";

    float perpetuityFutureValue = Value::calculatePerpetuityFutureValue();
    std::cout << perpetuityFutureValue << "\n";
    float annuityFutureValue = Value::calculateAnnuityFutureValue(20, 0.08, 5);
    std::cout << annuityFutureValue << "\n";

    return 0;
}
