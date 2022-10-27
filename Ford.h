#ifndef FORD_H
#define FORD_H
#include "Car.h"

class Ford:public Car{
    private:
        int badgeNumber;
        float litresOfFuel;     // Initially 60L
        static int nextVinNumber;
    
    public: 
        Ford();          
        Ford(int badgeNumber, int price);

        void refuel(int litres);

        void drive(int kms);  

        void set_badgeNumber(int _b);
        int get_badgeNumber();

        void set_litresOfFuel(float _l);
        float get_litresOfFuel();

};


#endif //FORD_H