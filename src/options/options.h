#ifndef OPTIONS_H
#define OPTIONS_H

namespace options
{
    enum class OptionType
    {
        Call,
        Put
    };

    struct Option
    {
        OptionType type;
        float exercisePrice;
    };

    float calculatePriceAtMaturity(const Option& option, float stockPrice);
}

#endif