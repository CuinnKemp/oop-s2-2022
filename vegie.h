#ifndef VEGIE_H
#define VEGIE_H

#include "animal.h"

class vegie:public animal{
private:
    string favourite_food;
    static int nextID;

public:
    vegie(string n, int v);

    string get_name();

    void set_favourite_food(string ff);
    string get_favourite_food();

};



#endif //VEGIE_H