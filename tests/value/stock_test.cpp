#include <iostream>

#include "gtest/gtest.h"
#include "../../src/value/stock.h"

TEST(StockTest, ValidPresentValue)
{
    std::vector<float> dividends = {5, 5.5};
    float terminalValue = 121;
    float costOfEquity = 0.15;

    value::Stock stock = value::Stock(dividends, terminalValue, costOfEquity);
    float presentValue = value::calculatePresentValue(stock);
    float result = 100;
    float errorBound = 0.1;
    EXPECT_NEAR(presentValue, result, errorBound);
}