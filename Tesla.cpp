#include "Tesla.h"

int Tesla::nextVinNumber = 1000001;

Tesla::Tesla(){
    this->model = ' ';
    this->price = 0;
    this->emissions = 0;
    this->batteryPercentage = 100;
    this->vinNumber = this->nextVinNumber;

    this->nextVinNumber++;
}

Tesla::Tesla(char model, int price){
    this->model = model;
    this->price = price;
    this->emissions = 0;
    this->batteryPercentage = 100;
    this->vinNumber = this->nextVinNumber;

    this->nextVinNumber++;
}  

void Tesla::chargeBattery(int mins){
    for (int i = 1; i <= mins; i++){
        if (batteryPercentage < 100){
            this->batteryPercentage += 0.5;
        }
    }
    int hold = this->batteryPercentage * 10;
    this->batteryPercentage = hold/10.0;
}

void Tesla::drive(int kms){
    for (int i = 1; i <= kms; i++){
        if (this->batteryPercentage > 0){
            this->emissions = this->emissions + 74;
            batteryPercentage = batteryPercentage - 0.2;
        }
    }
    int hold = this->batteryPercentage * 10;
    this->batteryPercentage = hold/10.0;
}

void Tesla::set_model(char _m){
    this->model = _m;
}
char Tesla::get_model(){
    return this->model;
}

void Tesla::set_batteryPercentage(float _b){
    this->batteryPercentage = _b;
}
float Tesla::get_batteryPercentage(){
    return this->batteryPercentage;
}