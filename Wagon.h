#ifndef WAGON_H
#define WAGON_H

#include <string>
using namespace std;

#include "Capybara.h"

class Wagon{
    private:
    Capybara Capies[4];
    int capyCount;
    public:
    Wagon();                               // create an empty wagonobject
    bool addCapybara(Capybara newCapy);    // adds a Capybara to the wagon, returns false if full
    void emptyWagon();                     // remove all Capybaras from the wagon
    void printCapybaras();                 // print the name, a space, the age, then a new line
                                        // for each capybara in the order they were added
};

#endif //WAGON_H