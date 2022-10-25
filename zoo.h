#ifndef ZOO_H
#define ZOO_H

#include <string>
using namespace std;

#include "animal.h"
#include "hunter.h"
#include "vegie.h"

class zoo{
private:
    string name;
    int number_of_animals;
    animal** animals;
public:
    zoo(string n, int cows, int lions);

    string get_name();
    int get_number_of_animals();
    animal** get_animals();
};

#endif // ZOO_H