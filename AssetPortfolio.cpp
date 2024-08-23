#include "AssetPortfolio.h"
#include <iostream>

AssetPortfolio::AssetPortfolio() : max_size(0), current_size(0), assets(nullptr) {}

AssetPortfolio::AssetPortfolio(int size) : max_size(size), current_size(0) {
    if (size > 0) {
        assets = new Asset[size];
    } else {
        assets = nullptr;
    }
}

int AssetPortfolio::get_num_assets() const {
    return current_size;
}

bool AssetPortfolio::has_asset(std::string product) const {
    for (int i = 0; i < current_size; i++) {
        if (assets[i].get_product_type() == product) {
            return true;
        }
    }
    return false;
}

Asset* AssetPortfolio::get_assets() const {
    return assets;
}

bool AssetPortfolio::add_asset(Asset new_asset) {
    if (current_size < max_size) {
        assets[current_size++] = new_asset;
        return true;
    }
    return false;
}

AssetPortfolio::~AssetPortfolio() {
    delete[] assets;
}