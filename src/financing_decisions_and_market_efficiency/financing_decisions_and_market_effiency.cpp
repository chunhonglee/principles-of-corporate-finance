#include "financing_decisions_and_market_effiency.h"
#include <algorithm>
#include <limits>

namespace financing_decisions_and_market_effiency
{

    std::pair<std::vector<Bid>, float> DiscriminatoryAuction::auction(const std::vector<Bid> &bids, int shares)
    {
        std::vector<Bid> sortedBid = bids;
        std::sort(sortedBid.begin(), sortedBid.end(), [](const Bid &a, const Bid &b)
                  { return a.price > b.price; });

        std::vector<Bid> finalBids = {};
        float total = 0;
        for (const Bid &bid : sortedBid)
        {
            if (shares <= 0)
            {
                break;
            }

            int numberOfShares = bid.numberOfShares;
            int leftOverShares = std::min(numberOfShares, shares);
            shares -= leftOverShares;

            Bid currentBid = {bid.bidder, leftOverShares, bid.price};
            finalBids.push_back(currentBid);
            total += leftOverShares * bid.price;
        }

        std::sort(finalBids.begin(), finalBids.end(), [](const Bid &a, const Bid &b)
                  { return a.price > b.price; });

        return {finalBids, total};
    };

    std::pair<std::vector<Bid>, float> UniformPriceAuction::auction(const std::vector<Bid> &bids, int shares)
    {
        std::vector<Bid> sortedBid = bids;
        std::sort(sortedBid.begin(), sortedBid.end(), [](const Bid &a, const Bid &b)
                  { return a.price > b.price; });

        std::vector<Bid> finalBids = {};
        float lowestPrice = std::numeric_limits<float>::max();
        for (const Bid &bid : sortedBid)
        {
            if (shares <= 0)
            {
                break;
            }

            int numberOfShares = bid.numberOfShares;
            int leftOverShares = std::min(numberOfShares, shares);
            shares -= leftOverShares;

            Bid currentBid = {bid.bidder, leftOverShares, bid.price};
            finalBids.push_back(currentBid);
            lowestPrice = std::min(lowestPrice, bid.price);
        }

        if (finalBids.empty())
        {
            return {{}, 0};
        }

        float total = 0;
        for (Bid &bid : finalBids)
        {
            bid.price = lowestPrice;
            total += static_cast<float>(bid.numberOfShares) * lowestPrice;
        }

        std::sort(finalBids.begin(), finalBids.end(), [](const Bid &a, const Bid &b)
                  { return a.numberOfShares > b.numberOfShares; });

        return {finalBids, total};
    };
}