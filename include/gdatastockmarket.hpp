#include <stock.hpp>
#include <vector>


class GDataStocksMarket {
public:
    std::vector<Stock> stocks;

    GDataStocksMarket();
    
    static int updateStocksByReadingFile();
};