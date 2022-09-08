#include "AssetPortfolio.h"

AssetPortfolio::AssetPortfolio(){
    this->size = 0;
    this->count = 0;
    this->Assets = new Asset[1];
}

AssetPortfolio::AssetPortfolio(int size){
    this->size = size;
    this->count = 0;
    this->Assets = new Asset[this->size];
}

int AssetPortfolio::get_num_assets(){
    return this->count;
}

bool AssetPortfolio::has_asset(std::string product){
    for (int i = 0; i < count; i++){
        if (Assets[i].get_product_type() == product){
            return 1;
        }
    }
    return 0;
}

Asset* AssetPortfolio::get_assets(){
    return this->Assets;
}

bool AssetPortfolio::add_asset(Asset new_asset){
    if (this->count >= this->size){
        return 0;
    }
    Assets[count] = new_asset;
    count++;
    return 1;

}

AssetPortfolio::~AssetPortfolio(){
    delete[] Assets;
}