#ifndef HUNTER_H
#define HUNTER_H

#include "animal.h"

class hunter:public animal{
private:
    int kills;
    static int nextID;

public:
    hunter(string n, int v);

    string get_name();

    void set_kills(int k);
    int get_kills();
};

#endif //HUNTER_H