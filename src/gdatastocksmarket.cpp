#include "..\include\gdatastockmarket.hpp"
#include <fstream>
#include <iostream>
#include <algorithm>

GDataStocksMarket::GDataStocksMarket() {

}

int GDataStocksMarket::updateStocksByReadingFile() {
    Stock actualStock = Stock();
    std::string line;
    std::ifstream cotaHist("COTAHIST_A2024.TXT");
    if (!cotaHist.is_open()) {
        std::cerr << "Error opening file, check if the COTAHIST_A****.TXT exists";
        return -1;
    }
    while (getline(cotaHist, line)) {
        actualStock.setCompanyName(line.substr(28, 40));
        if (!exist(stocks,actualStock)) {
            stocks.push_back(actualStock);
        }
    }
    return 0;
}

bool GDataStocksMarket::exist(std::vector<Stock> stks, Stock stk) {
    for (std::vector<Stock>::iterator it = stks.begin(); it != stks.end(); ++it) {
        if (it->getCompanyName() == stk.getCompanyName()) {
            return true;
        }
    }
    return false;
}

std::string GDataStocksMarket::toString() {
    for (auto& s : stocks) {
        std::cout << s.toString();
    }
}