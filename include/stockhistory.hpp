#include <string>

class StockHistory {
public:
    std::string auctionDate;
    double openAuctionPrice;
    double maxPrice;
    double minPrice;
    double averagePrice;
    double lastBusinessPrice;
    double bestPurchasePrice;
    double bestSellPrice;
    int nBusinessMade;
    int amountOfStocksTraded;
    double volume;
    int factor;

    StockHistory();
    StockHistory 
    (
        std::string auctionDate, double openAuctionPrice, double maxPrice, 
        double minPrice, double averagePrice, double lastBusinessPrice, 
        double bestPurchasePrice, double bestSellPrice, int nBusinessMade, 
        int amountOfStocksTraded, double volume, int factor
    );
};