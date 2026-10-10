#ifndef FINANCING_DECISIONS_AND_MARKET_EFFICIENCY_H
#define FINANCING_DECISIONS_AND_MARKET_EFFICIENCY_H

#include <vector>
#include <string>

namespace financing_decisions_and_market_effiency
{
    struct Bid
    {
        std::string bidder;
        int numberOfShares;
        float price;

        bool operator==(const Bid &other) const
        {
            return (bidder == other.bidder) && (numberOfShares == other.numberOfShares) && (price == other.price);
        }
    };

    class Auction
    {
    public:
        virtual ~Auction() = default;

        /**
         * @brief Interface to calculate the issuing of the shares to the different bidders
         *
         * @param bids List of bidders
         * @param shares The number of outstanding shares
         * @return std::pair<std::vector<Bid>, float> Pair of the assigned bids and the total amount collected, ordered descending in price
         */
        virtual std::pair<std::vector<Bid>, float> auction(const std::vector<Bid> &bids, int shares) = 0;
    };

    class DiscriminatoryAuction : public Auction
    {
    public:
        /**
         * @brief Assigns the shares to the different bidders using the discriminatory auction strategy
         *
         * @param bids List of bidders
         * @param shares The number of outstanding shares
         * @return std::pair<std::vector<Bid>, float> Pair of assigned bids and the total amount collected, ordered descending in number of shares
         */
        std::pair<std::vector<Bid>, float> auction(const std::vector<Bid> &bids, int shares) override;
    };

    class UniformPriceAuction : public Auction
    {
    public:
        /**
         * @brief Assigns the shares to the different bidders using the uniform-price auction strategy
         *
         * @param bids List of bidders
         * @param shares The number of outstanding shares
         * @return std::pair<std::vector<Bid>, float> Pair of assigned bids and the total amount collected
         */
        std::pair<std::vector<Bid>, float> auction(const std::vector<Bid> &bids, int shares) override;
    };
}

#endif