#include "stock.hpp"
#include <vector>
#include <iostream>


class GDataStocksMarket {
public:
    std::vector<Stock> stocks = std::vector<Stock>();

    GDataStocksMarket();
    
    int updateStocksByReadingFile();
    bool exist(std::vector<Stock>, Stock);
    std::string toString();
};