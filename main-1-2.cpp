#include <iostream>
#include "AssetPortfolio.h"

int main() {
    
    AssetPortfolio emptyPortfolio;
    std::cout << "Empty Portfolio Assets: " << emptyPortfolio.get_num_assets() << std::endl;

    AssetPortfolio portfolio(3);
    std::cout << "Portfolio Assets initially: " << portfolio.get_num_assets() << std::endl;

    Asset stock(1000, "Stock");
    Asset bond(5000, "Bond");
    Asset realEstate(20000, "Real Estate");

    portfolio.add_asset(stock);
    portfolio.add_asset(bond);
    portfolio.add_asset(realEstate);

    std::cout << "Portfolio Assets after adding: " << portfolio.get_num_assets() << std::endl;

    std::cout << "Portfolio has Stock: " << (portfolio.has_asset("Stock") ? "Yes" : "No") << std::endl;
    std::cout << "Portfolio has Bond: " << (portfolio.has_asset("Bond") ? "Yes" : "No") << std::endl;
    std::cout << "Portfolio has Real Estate: " << (portfolio.has_asset("Real Estate") ? "Yes" : "No") << std::endl;
    std::cout << "Portfolio has Gold: " << (portfolio.has_asset("Gold") ? "Yes" : "No") << std::endl;

    Asset gold(1500, "Gold");
    if (!portfolio.add_asset(gold)) {
        std::cout << "Failed to add Gold, portfolio is full." << std::endl;
    }

    return 0;
}