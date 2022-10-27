#ifndef CAR_H
#define CAR_H

class Car{
    protected:
    int price;
    int vinNumber;
    int emissions;   // CO2 Emissions
    
    public:
    Car();
    Car(int price);  // creates a Car with a price

    virtual void drive(int kms) = 0;

    void set_price(int _p);
    int get_price();

    void set_vinNumber(int _v);
    int get_vinNumber();

    void set_emissions(int _e);
    int get_emissions();
};

#endif //CAR_H