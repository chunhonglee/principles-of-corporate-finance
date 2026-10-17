#include "options.h"
#include <algorithm>
#include <stdexcept>

namespace options
{

    float calculatePriceAtMaturity(const Option& option, float stockPrice)
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
}