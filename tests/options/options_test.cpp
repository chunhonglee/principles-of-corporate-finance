#include "gtest/gtest.h"
#include "../../src/options/options.h"

using namespace options;

TEST(OptionsTest, CallOptionOutOfTheMoneyTest)
{
    Option option = {OptionType::Call, 100};
    float stockPrice = 90;

    float priceAtMaturity = calculatePriceAtMaturity(option, stockPrice);
    float result = 0;
    EXPECT_FLOAT_EQ(priceAtMaturity, result);
}

TEST(OptionsTest, CallOptionAtTheMoneyTest)
{
    Option option = {OptionType::Call, 100};
    float stockPrice = 100;

    float priceAtMaturity = calculatePriceAtMaturity(option, stockPrice);
    float result = 0;
    EXPECT_FLOAT_EQ(priceAtMaturity, result);
}

TEST(OptionsTest, CallOptionInTheMoneyTest)
{
    Option option = {OptionType::Call, 100};
    float stockPrice = 110;

    float priceAtMaturity = calculatePriceAtMaturity(option, stockPrice);
    float result = 10;
    EXPECT_FLOAT_EQ(priceAtMaturity, result);
}

TEST(OptionsTest, PutOptionOutOfTheMoneyTest)
{
    Option option = {OptionType::Put, 100};
    float stockPrice = 110;

    float priceAtMaturity = calculatePriceAtMaturity(option, stockPrice);
    float result = 0;
    EXPECT_FLOAT_EQ(priceAtMaturity, result);
}

TEST(OptionsTest, PutOptionAtTheMoneyTest)
{
    Option option = {OptionType::Put, 100};
    float stockPrice = 100;

    float priceAtMaturity = calculatePriceAtMaturity(option, stockPrice);
    float result = 0;
    EXPECT_FLOAT_EQ(priceAtMaturity, result);
}

TEST(OptionsTest, PutOptionInTheMoneyTest)
{
    Option option = {OptionType::Put, 100};
    float stockPrice = 90;

    float priceAtMaturity = calculatePriceAtMaturity(option, stockPrice);
    float result = 10;
    EXPECT_FLOAT_EQ(priceAtMaturity, result);
}

TEST(OptionsTest, BlackScholesCallOptionTest)
{
    Option option = {OptionType::Call, 100};

    float stockPrice = 100;
    float riskFreeRate = 0.05;
    float timeToMaturity = 1;
    float volatility = 0.20;

    float price = calculatePriceOfOption(option, stockPrice, riskFreeRate, timeToMaturity, volatility);
    float result = 10.45;
    float errorBound = 0.01;
    EXPECT_NEAR(price, result, errorBound);
}

TEST(OptionsTest, BlackScholesPutOptionTest)
{
    Option option = {OptionType::Put, 100};

    float stockPrice = 100;
    float riskFreeRate = 0.05;
    float timeToMaturity = 1;
    float volatility = 0.20;

    float price = calculatePriceOfOption(option, stockPrice, riskFreeRate, timeToMaturity, volatility);
    float result = 5.57;
    float errorBound = 0.01;
    EXPECT_NEAR(price, result, errorBound);
}