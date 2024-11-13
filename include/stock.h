#include <string>
#include <vector>

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
        OIL_GAS,  // Corrected for Oil & Gas
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

class Stock {
public:
    /* Stock information */
    std::string symbol;
    std::string companyName;
    std::string marked;
    BusinessArea stockSector;
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
    std::vector<double> priceHistory;
    std::vector<long> volumeHistory;
    /* Other optional attributes */
    bool isActive;
    std::string currency;

};