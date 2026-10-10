#include "gtest/gtest.h"
#include "../../src/financing_decisions_and_market_efficiency/financing_decisions_and_market_effiency.h"

using namespace financing_decisions_and_market_effiency;

TEST(FinancingDecisionsAndMarketEffiencyTest, DiscriminatoryAuctionTest)
{
    std::vector<Bid> bids = {
        {"Eta Investments", 350000, 45},
        {"Kappa Fund", 300000, 50},
        {"Nu Group", 300000, 60},
        {"Omicron Growth", 400000, 70},
    };
    int shares = 1000000;

    std::pair<std::vector<Bid>, float> auctionResult = DiscriminatoryAuction().auction(bids, shares);
    std::vector<Bid> bidResult = {
        {"Omicron Growth", 400000, 70},
        {"Nu Group", 300000, 60},
        {"Kappa Fund", 300000, 50},
    };
    float priceResult = 61000000;

    EXPECT_EQ(auctionResult.first, bidResult);
    EXPECT_FLOAT_EQ(auctionResult.second, priceResult);
}

TEST(FinancingDecisionsAndMarketEffiencyTest, UniformPriceAuctionTest)
{
    std::vector<Bid> bids = {
        {"Eta Investments", 350000, 45},
        {"Kappa Fund", 300000, 50},
        {"Nu Group", 300000, 60},
        {"Omicron Growth", 400000, 70},
    };
    int shares = 1000000;

    std::pair<std::vector<Bid>, float> auctionResult = UniformPriceAuction().auction(bids, shares);
    std::vector<Bid> bidResult = {
        {"Omicron Growth", 400000, 50},
        {"Nu Group", 300000, 50},
        {"Kappa Fund", 300000, 50},
    };
    float priceResult = 50000000;

    EXPECT_EQ(auctionResult.first, bidResult);
    EXPECT_FLOAT_EQ(auctionResult.second, priceResult);
}