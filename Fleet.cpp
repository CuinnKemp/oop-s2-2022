#include "Fleet.h"

Fleet::Fleet(){
    count = 5;
    this->fleet = new Car*[5];
    for (int i = 0; i < 3; i++){
        fleet[i] = new Tesla;
    }
    for (int i = 3; i < 5; i++){
        fleet[i] = new Ford;
    }

}                  

Fleet* Fleet::createFleet(int authority){
    if (authority == 10){
        Fleet* f1 = new Fleet;
        return f1;
    }
    return nullptr;
}

void Fleet::addCar(Car *car){
    Car** hold = fleet;
    fleet = new Car*[count + 1];
    for (int i = 0; i < count; i++){
        fleet[i] = hold[i];
    }
    fleet[count] = car;
    this->count++;
}  // Adds a car to the fleet

Car** Fleet::get_fleet(){
    return this->fleet;
}     // Returns the array of pointers to the five Car objects

int Fleet::get_count(){
    return this->count;
} 