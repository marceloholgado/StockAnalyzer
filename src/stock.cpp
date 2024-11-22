#include "..\include\stock.hpp"
#include <iostream>
#include <sstream>

Stock::Stock() { }

std::string Stock::getCurrency()
{
    return currency;
}

void Stock::setCurrency(std::string currency)
{
    currency = currency;
}

/* Stock information */
std::string Stock::getSymbol()
{
    return symbol;
}

void Stock::setSymbol(std::string symbol)
{
    symbol = symbol;
}

std::string Stock::getCompanyName()
{
    return companyName;
}

void Stock::setCompanyName(std::string companyName)
{
    companyName = companyName;
}

std::string Stock::getMarked()
{
    return marked;
}

void Stock::setMarked(std::string marked)
{
    marked = marked;
}

BusinessArea Stock::getStockSector()
{
    return stockSector;
}

void Stock::setStockSector(BusinessArea stockSector)
{
    stockSector = stockSector;
}

/* Price Data */
double Stock::getCurrentPrice()
{
    return currentPrice;
}

void Stock::setCurrentPrice(double currentPrice)
{
    currentPrice = currentPrice;
}

double Stock::getOpenPrice()
{
    return openPrice;
}

void Stock::setOpenPrice(double openPrice)
{
    openPrice = openPrice;
}

double Stock::getClosePrice()
{
    return closePrice;
}

void Stock::setClosePrice(double closePrice)
{
    closePrice = closePrice;
}

double Stock::getHightPriceToday()
{
    return hightPriceToday;
}

void Stock::setHightPriceToday(double hightPriceToday)
{
    hightPriceToday = hightPriceToday;
}

double Stock::getLowPrice()
{
    return lowPrice;
}

void Stock::setLowPrice(double lowPrice)
{
    lowPrice = lowPrice;
}

double Stock::getFiftyTowWeekHight()
{
    return fiftyTowWeekHight;
}

void Stock::setFiftyTowWeekHight(double fiftyTowWeekHight)
{
    fiftyTowWeekHight = fiftyTowWeekHight;
}

double Stock::getFiftyTowWeekLow()
{
    return fiftyTowWeekLow;
}

void Stock::setFiftyTowWeekLow(double fiftyTowWeekLow)
{
    fiftyTowWeekLow = fiftyTowWeekLow;
}

/* Volume and capitalization data */
long Stock::getVolume()
{
    return volume;
}

void Stock::setVolume(long volume)
{
    volume = volume;
}

long Stock::getAverageVolume()
{
    return averageVolume;
}

void Stock::setAverageVolume(long averageVolume)
{
    averageVolume = averageVolume;
}

double Stock::getMarketCap()
{
    return marketCap;
}

void Stock::setMarketCap(double marketCap)
{
    marketCap = marketCap;
}

double Stock::getSharesOutstanding()
{
    return sharesOutstanding;
}

void Stock::setSharesOutstanding(double sharesOutstanding)
{
    sharesOutstanding = sharesOutstanding;
}

/* Financial indicators */
double Stock::getPriceToEarningsRatio()
{
    return priceToEarningsRatio;
}

void Stock::setPriceToEarningsRatio(double priceToEarningsRatio)
{
    priceToEarningsRatio = priceToEarningsRatio;
}

double Stock::getEarningsPerShare()
{
    return earningsPerShare;
}

void Stock::setEarningsPerShare(double earningsPerShare)
{
    earningsPerShare = earningsPerShare;
}

double Stock::getDividendYield()
{
    return dividendYield;
}

void Stock::setDividendYield(double dividendYield)
{
    dividendYield = dividendYield;
}

double Stock::getBeta()
{
    return beta;
}

void Stock::setBeta(double beta)
{
    beta = beta;
}

/* Important dates */
std::string Stock::getEarningsDate()
{
    return earningsDate;
}

void Stock::setEarningsDate(std::string earningsDate)
{
    earningsDate = earningsDate;
}

std::string Stock::getDividendDate()
{
    return dividendDate;
}

void Stock::setDividendDate(std::string dividendDate)
{
    dividendDate = dividendDate;
}

/* Historic performance */
StockHistory Stock::getHistory()
{
    return history;
}

void Stock::setHistory(StockHistory h)
{
    history = h;
}

bool Stock::isIsActive()
{
    return isActive;
}

void Stock::setIsActive(bool isActive)
{
    isActive = isActive;
}

std::string Stock::toString() {
    std::ostringstream oss;

    oss << "=== Stock Details ===\n";
    oss << "Registry Type: " << registryType << "\n";
    oss << "Active: " << (isActive ? "Yes" : "No") << "\n";
    oss << "Currency: " << currency << "\n";

    oss << "\n=== Stock Information ===\n";
    oss << "Symbol: " << symbol << "\n";
    oss << "Company Name: " << companyName << "\n";
    oss << "Marked: " << marked << "\n";

    oss << "\n=== Price Data ===\n";
    oss << "Current Price: " << currentPrice << "\n";
    oss << "Open Price: " << openPrice << "\n";
    oss << "Close Price: " << closePrice << "\n";
    oss << "High Price Today: " << hightPriceToday << "\n";
    oss << "Low Price: " << lowPrice << "\n";
    oss << "52-Week High: " << fiftyTowWeekHight << "\n";
    oss << "52-Week Low: " << fiftyTowWeekLow << "\n";

    oss << "\n=== Volume and Capitalization Data ===\n";
    oss << "Volume: " << volume << "\n";
    oss << "Average Volume: " << averageVolume << "\n";
    oss << "Market Cap: " << marketCap << "\n";
    oss << "Shares Outstanding: " << sharesOutstanding << "\n";

    oss << "\n=== Financial Indicators ===\n";
    oss << "P/E Ratio: " << priceToEarningsRatio << "\n";
    oss << "Earnings Per Share: " << earningsPerShare << "\n";
    oss << "Dividend Yield: " << dividendYield << "\n";
    oss << "Beta: " << beta << "\n";

    oss << "\n=== Important Dates ===\n";
    oss << "Earnings Date: " << earningsDate << "\n";
    oss << "Dividend Date: " << dividendDate << "\n";

    return oss.str();
}