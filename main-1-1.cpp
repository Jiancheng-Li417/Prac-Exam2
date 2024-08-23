#include <iostream>
#include "Asset.h"

int main() {
    
    Asset defaultAsset;
    std::cout << "Default Asset Type: " << defaultAsset.get_product_type() << std::endl;
    std::cout << "Default Asset Value: " << defaultAsset.get_value() << std::endl;

    Asset stockAsset(1000, "Stock");
    std::cout << "Stock Asset Type: " << stockAsset.get_product_type() << std::endl;
    std::cout << "Stock Asset Value: " << stockAsset.get_value() << std::endl;

    Asset bondAsset(5000, "Bond");
    std::cout << "Bond Asset Type: " << bondAsset.get_product_type() << std::endl;
    std::cout << "Bond Asset Value: " << bondAsset.get_value() << std::endl;

    return 0;
}