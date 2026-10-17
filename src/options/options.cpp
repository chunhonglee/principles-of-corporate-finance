#include "options.h"
#include <algorithm>
#include <stdexcept>
#include <cmath>

namespace options
{

    float calculatePriceAtMaturity(const Option &option, float stockPrice)
    {
        switch (option.type)
        {
        case OptionType::Call:
            return std::max(stockPrice - option.exercisePrice, 0.0f);
        case OptionType::Put:
            return std::max(option.exercisePrice - stockPrice, 0.0f);
        default:
            throw std::invalid_argument("Invalid Argument - The option has an invalid type");
        }
    }

    float calculatePriceOfOption(const Option &option, float stockPrice, float riskFreeRate, float timeToMaturity, float volatility)
    {
        float d1 = (std::log(stockPrice / option.exercisePrice) + (riskFreeRate + (std::pow(volatility, 2) / 2)) * timeToMaturity) / (volatility * std::sqrt(timeToMaturity));
        float d2 = d1 - (volatility * std::sqrt(timeToMaturity));
        float callPrice = stockPrice * standardNormalCFG(d1) - (option.exercisePrice * std::exp(-riskFreeRate * timeToMaturity)) * standardNormalCFG(d2);

        switch (option.type)
        {
        case OptionType::Call:
            return callPrice;
        case OptionType::Put:
            return callPrice - stockPrice + (option.exercisePrice * std::exp(-riskFreeRate * timeToMaturity));
        default:
            throw std::invalid_argument("Invalid Argument - The option has an invalid type");
        }
    }

    float standardNormalCFG(float x)
    {
        return 0.5 * (1.0 + std::erf(x / std::sqrt(2.0)));
    }
}