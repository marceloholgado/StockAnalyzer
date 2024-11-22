#include "..\include\stockhistory.hpp"

StockHistory::StockHistory(){};


StockHistory::StockHistory(std::string auctionDate, double openAuctionPrice, double maxPrice, 
        double minPrice, double averagePrice, double lastBusinessPrice, 
        double bestPurchasePrice, double bestSellPrice, int nBusinessMade, 
        int amountOfStocksTraded, double volume, int factor) 
{
    auctionDate = auctionDate;
    openAuctionPrice = openAuctionPrice;
    maxPrice = maxPrice;
    minPrice = minPrice;
    averagePrice = averagePrice;
    lastBusinessPrice = lastBusinessPrice;
    bestPurchasePrice = bestPurchasePrice;
    bestSellPrice = bestSellPrice;
    nBusinessMade = nBusinessMade;
    amountOfStocksTraded = amountOfStocksTraded;
    volume = volume;
    factor = factor;
}