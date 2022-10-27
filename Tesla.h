#ifndef TESLA_H
#define TESLA_H
#include "Car.h"

class Tesla:public Car{
    private:
        char model;
        float batteryPercentage;     // Initially 100%
        static int nextVinNumber;
    
    public: 
        Tesla();

        Tesla(char model, int price);  

        void chargeBattery(int mins);

        void drive(int kms);

        void set_model(char _m);
        char get_model();

        void set_batteryPercentage(float _b);
        float get_batteryPercentage();

};


#endif //TESLA_H