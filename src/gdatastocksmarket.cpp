#include "gdatastockmarket.hpp"
#include <fstream>
#include <iostream>

GDataStocksMarket::GDataStocksMarket() {

}

int GDataStocksMarket::updateStocksByReadingFile() {
    Stock actualStock;

    std::ifstream cotaHist("COTAHIST_A2024.TXT");
    if (!cotaHist.is_open()) {
        std::cerr << "Error opening file, check if the COTAHIST_A****.TXT exists";
        return -1;
    }
    
    return 0;
}