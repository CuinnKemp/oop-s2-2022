#include "Car.h"

Car::Car(){
    this->emissions = 0;
    this->price = 0;
    this->vinNumber = 0;
}

Car::Car(int price){
    this->emissions = 0;
    this->price = price;
    this->vinNumber = 0;
}  // creates a Car with a price

void Car::set_price(int _p){
    this->price = _p;
}
int Car::get_price(){
    return this->price;
}

void Car::set_vinNumber(int _v){
    this->vinNumber = _v;
}
int Car::get_vinNumber(){
    return this->vinNumber;
}

void Car::set_emissions(int _e){
    this->emissions = _e;
}
int Car::get_emissions(){
    return this->emissions;
}