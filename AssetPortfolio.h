#ifndef ASSETPORTFOLIO_H
#define ASSETPORTFOLIO_H

#include "Asset.h"

class AssetPortfolio {
private:
    int max_size;
    int current_size;
    Asset *assets;

public:
    
    AssetPortfolio();

    AssetPortfolio(int size);

    int get_num_assets() const;

    bool has_asset(std::string product) const;

    Asset *get_assets() const;

    bool add_asset(Asset new_asset);

    ~AssetPortfolio();
};

#endif 