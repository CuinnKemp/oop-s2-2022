#ifndef FLEET_H
#define FLEET_H

#include "Car.h"
#include "Ford.h"
#include "Tesla.h"

class Fleet{
private:
Car** fleet;
int count;
Fleet(); 

public:
static Fleet* createFleet(int authority);               
void addCar(Car *car);  // Adds a car to the fleet
Car** get_fleet();      // Returns the array of pointers to the five Car objects
int get_count();     // Returns the amount of cars added to the fleet

};

#endif //FLEET_H