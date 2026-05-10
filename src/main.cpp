#include <iostream>
#include <cmath>
#include "module/example.h"
#include <vector>

namespace Value {
    float calculateFutureValue(float presentValue, float r, int t) {
        float futureValue = presentValue * pow((1 + r), t);
        
        return futureValue;
    }

    float calculateDiscountFactor(float r, int t) {
        float discountFactor = 1 / pow((1 + r), t);

        return discountFactor;
    }

    float calculatePresentValue(float C, float r, int t) {
        float discountFactor = calculateDiscountFactor(r, t);
        float presentValue = C * discountFactor;

        return presentValue;
    }

    float calculateNetPresentValue(float presentValue, float investment) {
        float netPresentValue = presentValue - investment;

        return netPresentValue;
    }

    float calculateDiscountedCashFlow(std::vector<float> C, float r, int T) {
        float presentValue = 0;
        for (int t = 1; t <= T; t++) {
            presentValue += calculatePresentValue(C[t-1], r, t);
        }

        return presentValue;
    }

}

int main(int argc, char** argv) {
    float futureValue = Value::calculateFutureValue(100, 0.07, 2);
    float presentValue = Value::calculatePresentValue(114.49, 0.07, 2);
    float discountedCashFlow = Value::calculateDiscountedCashFlow({30000, 870000}, 0.12, 2);
    std::cout << futureValue << "\n";
    std::cout << presentValue << "\n";
    std::cout << discountedCashFlow << "\n";

    return 0;
}
