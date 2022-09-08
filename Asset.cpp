#include "Asset.h"

Asset::Asset(){
    this->value = 0;
    this->product_type = "";
}

Asset::Asset(int value, std::string product_type){
    this->value = value;
    this->product_type = product_type;
} 

std::string Asset::get_product_type(){
    return this->product_type;
}
int Asset::get_value(){
    return this->value;
}
Asset::~Asset(){}