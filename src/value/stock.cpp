#include "value.h"
#include "stock.h"

namespace value
{
    Stock::Stock(std::vector<float> dividends, float terminalValue, float costOfEquity)
    {
        this->dividends = dividends;
        this->terminalValue = terminalValue;
        this->costOfEquity = costOfEquity;
    }

    std::vector<float> Stock::getDividends()
    {
        return this->dividends;
    }

    float Stock::getTerminalValue()
    {
        return this->terminalValue;
    }

    float Stock::getCostOfEquity()
    {
        return this->costOfEquity;
    }

    float calculatePresentValue(Stock &stock)
    {
        std::vector<float> dividends = stock.getDividends();
        float r = stock.getCostOfEquity();
        float P = stock.getTerminalValue();
        float t = dividends.size();

        float presentValueDividends = value::calculateDiscountedCashFlow(dividends, r);
        float presentValueTerminalValue = value::calculatePresentValue(P, r, t);
        float presentValue = presentValueDividends + presentValueTerminalValue;

        return presentValue;
    }
}