#include "Tesla.h"
#include <cmath>

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
    double hold = batteryPercentage;
    for (int i = 1; i <= mins; i++){
        if (batteryPercentage < 100){
            hold += 0.5;
        }
    }
    this->batteryPercentage = hold;
}

void Tesla::drive(int kms){
    double hold = batteryPercentage;
    for (int i = 1; i <= kms; i++){
        if (this->batteryPercentage > 0){
            this->emissions = this->emissions + 74;
             hold = hold - 0.2;
        }
    }
    this->batteryPercentage = hold;

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