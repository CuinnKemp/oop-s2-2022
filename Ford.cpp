#include "Ford.h"

int Ford::nextVinNumber = 2000002;

Ford::Ford(){
    this->badgeNumber = 0;
    this->price = 0;
    this->emissions = 0;
    this->litresOfFuel = 60;
    this->vinNumber = this->nextVinNumber;
    this->nextVinNumber++;
}      

Ford::Ford(int badgeNumber, int price){
    this->badgeNumber = badgeNumber;
    this->price = price;
    this->emissions = 0;
    this->litresOfFuel = 60;
    this->vinNumber = this->nextVinNumber;
    this->nextVinNumber++;
}

void Ford::refuel(int litres){
    this->litresOfFuel += litres;
    if (this->litresOfFuel > 60){
        litresOfFuel = 60;
    }
}

void Ford::drive(int kms){
    for (int i = 1; i <= kms; i++){
        if (this->litresOfFuel > 0){
            this->emissions = this->emissions + 234;
            this->litresOfFuel = this->litresOfFuel - 0.2;
        }
    }
    int hold = this->litresOfFuel * 10;
    this->litresOfFuel = hold/10.0;
}  

void Ford::set_badgeNumber(int _b){
    this->badgeNumber = _b;
}
int Ford::get_badgeNumber(){
    return this->badgeNumber;
}

void Ford::set_litresOfFuel(float _l){
    this->litresOfFuel = _l;
}
float Ford::get_litresOfFuel(){
    return this->litresOfFuel;
}