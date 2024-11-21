#include <string>
#include <vector>
#include "stockhistory.hpp"

class BusinessArea {
public:
    enum class Sector {
        TECHNOLOGY,
        HEALTHCARE,
        FINANCE,
        ENERGY,
        CONSUMER_GOODS,
        INDUSTRIAL,
        REAL_ESTATE,
        UTILITIES,
        TELECOMMUNICATIONS,
        MATERIALS
    };
    enum class Subsector {
        // Technology
        SOFTWARE,
        HARDWARE,
        IT_SERVICES,
        // Healthcare
        BIOTECHNOLOGY,
        PHARMACEUTICALS,
        MEDICAL_DEVICES,
        // Finance
        BANKING,
        INSURANCE,
        ASSET_MANAGEMENT,
        // Energy
        RENEWABLE_ENERGY,
        OIL_GAS,
        COAL_MINING,
        // Consumer Goods
        FOOD_BEVERAGE,
        APPAREL,
        HOUSEHOLD_PRODUCTS,
        // Industrial
        MACHINERY,
        AEROSPACE,
        CONSTRUCTION,
        // Real Estate
        COMMERCIAL_REAL_ESTATE,
        RESIDENTIAL_REAL_ESTATE,
        INDUSTRIAL_REAL_ESTATE,
        // Utilities
        ELECTRIC_POWER,
        WATER_SUPPLY,
        NATURAL_GAS,
        // Telecommunications
        WIRELESS_COMMUNICATIONS,
        INTERNET_SERVICE_PROVIDERS,
        CABLE_TELEVISION,
        // Materials
        CHEMICALS,
        METALS_MINING,
        PACKAGING
    };
    enum class Segment {
        // Software
        ENTERPRISE_SOFTWARE,
        GAMING_SOFTWARE,
        CLOUD_COMPUTING,
        // Biotechnology
        GENE_THERAPY,
        VACCINES,
        CELL_THERAPY,
        // Banking
        INVESTMENT_BANKING,
        RETAIL_BANKING,
        CORPORATE_BANKING,
        // Renewable Energy
        SOLAR_POWER,
        WIND_POWER,
        HYDROELECTRIC_POWER,
        // Food and Beverage
        ORGANIC_FOODS,
        SNACKS,
        BEVERAGES,
        // Machinery
        CONSTRUCTION_EQUIPMENT,
        AGRICULTURAL_EQUIPMENT,
        MANUFACTURING_EQUIPMENT,
        // Commercial Real Estate
        OFFICE_SPACE,
        RETAIL_SPACE,
        INDUSTRIAL_WAREHOUSES,
        // Electric Power
        NUCLEAR_POWER,
        HYDROELECTRIC_POWER_PLANTS,
        COAL_POWER,
        // Wireless Communications
        MOBILE_NETWORKS,
        NETWORKS_5G,
        SATELLITE_COMMUNICATIONS,
        // Chemicals
        INDUSTRIAL_CHEMICALS,
        SPECIALTY_CHEMICALS,
        BASIC_CHEMICALS,
        // Oil & Gas
        EXPLORATION,
        REFINING,
        DISTRIBUTION
    };
    
    Sector sector;
    Subsector subsector;
    Segment segment;
};

enum class CODBDI_TABLE {
    STANDARD_LOT = 2,
    REGULATION_SANCTIONED = 5,
    BANKRUPTCY = 6,
    EXTRAJUDICIAL_RECOVERY = 7,
    JUDICIAL_RECOVERY = 8,
    TEMPORARY_ADMINISTRATION = 9,
    RIGHTS_AND_RECEIPTS = 10,
    INTERVENTION = 11,
    REAL_ESTATE_FUNDS = 12,
    INVESTMENT_CERTIFICATES_PUBLIC_TITLES = 14,
    BONDS = 18,
    PRIVATE_BONDS = 22,
    PUBLIC_SECURITIES = 26,
    CALL_OPTION_INDEX_EXERCISE = 32,
    PUT_OPTION_INDEX_EXERCISE = 33,
    CALL_OPTION_EXERCISE = 38,
    PUT_OPTION_EXERCISE = 42,
    NON_LISTED_AUCTION = 46,
    PRIVATIZATION_AUCTION = 48,
    RECOVERY_FUND_ES_AUCTION = 49,
    AUCTION = 50,
    FINOR_AUCTION = 51,
    FINAM_AUCTION = 52,
    FISET_AUCTION = 53,
    DEFAULTED_STOCK_AUCTION = 54,
    JUDICIAL_AUTHORIZED_SALES = 56,
    OTHER = 58,
    STOCK_SWAP = 60,
    GOAL = 61,
    FORWARD_MARKET = 62,
    DEBENTURES_MATURITY_UP_TO_3_YEARS = 66,
    DEBENTURES_MATURITY_ABOVE_3_YEARS = 68,
    FUTURES_WITH_GAIN_RETENTION = 70,
    FUTURES_MARKET = 71,
    CALL_OPTIONS_INDEX = 74,
    PUT_OPTIONS_INDEX = 75,
    CALL_OPTIONS = 78,
    PUT_OPTIONS = 82,
    BOVESPAFIX = 83,
    SOMAFIX = 84,
    REGISTERED_SPOT_TERM = 90,
    FRACTIONAL_MARKET = 96,
    TOTAL_SUMMARY = 99
};

class Stock {
private:
    int registryType;
    bool isActive;
    std::string currency;
    /* Stock information */
    std::string symbol;
    std::string companyName;
    std::string marked;
    BusinessArea stockSector;
    CODBDI_TABLE BDICode;
    /* Price Data */
    double currentPrice;
    double openPrice;
    double closePrice;
    double hightPriceToday;
    double lowPrice;
    double fiftyTowWeekHight;
    double fiftyTowWeekLow;
    /* Volume and capitalization data */
    long volume;
    long averageVolume;
    double marketCap;
    double sharesOutstanding;
    /* Financial indicators */
    double priceToEarningsRatio;
    double earningsPerShare;
    double dividendYield;
    double beta;
    /* Important dates */
    std::string earningsDate;
    std::string dividendDate;
    /* Historic performance */
    StockHistory history;
public:
    Stock();
    std::string getCurrency();
    void setCurrency(std::string currency);
    /* Stock information */
    std::string getSymbol();
    void setSymbol(std::string symbol);
    std::string getCompanyName();
    void setCompanyName(std::string companyName);
    std::string getMarked();
    void setMarked(std::string marked);
    BusinessArea getStockSector();
    void setStockSector(BusinessArea stockSector);
    /* Price Data */
    double getCurrentPrice();
    void setCurrentPrice(double currentPrice);
    double getOpenPrice();
    void setOpenPrice(double openPrice);
    double getClosePrice();
    void setClosePrice(double closePrice);
    double getHightPriceToday();
    void setHightPriceToday(double hightPriceToday);
    double getLowPrice();
    void setLowPrice(double lowPrice);
    double getFiftyTowWeekHight();
    void setFiftyTowWeekHight(double fiftyTowWeekHight);
    double getFiftyTowWeekLow();
    void setFiftyTowWeekLow(double fiftyTowWeekLow);
    /* Volume and capitalization data */
    long getVolume();
    void setVolume(long volume);
    long getAverageVolume();
    void setAverageVolume(long averageVolume);
    double getMarketCap();
    void setMarketCap(double marketCap);
    double getSharesOutstanding();
    void setSharesOutstanding(double sharesOutstanding);
    /* Financial indicators */
    double getPriceToEarningsRatio();
    void setPriceToEarningsRatio(double priceToEarningsRatio);
    double getEarningsPerShare();
    void setEarningsPerShare(double earningsPerShare);
    double getDividendYield();
    void setDividendYield(double dividendYield);
    double getBeta();
    void setBeta(double beta);
    /* Important dates */
    std::string getEarningsDate();
    void setEarningsDate(std::string earningsDate);
    std::string getDividendDate();
    void setDividendDate(std::string dividendDate);
    /* Historic performance */
    StockHistory getHistory();
    void setHistory(StockHistory h);
    bool isIsActive();
    void setIsActive(bool isActive);
};