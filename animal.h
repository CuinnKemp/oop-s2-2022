#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class animal{
protected:
    int animalID ;             // the animal's unique ID
    string name ;              // the animal's name
    int volume ;               // the volume of the animal's body

public:
    animal(string n, int v);  // creates an animal with name n and body volume v.
    animal(){return;};
    
    void set_name(string n);
    virtual string get_name() = 0;

    void set_volume(int v);
    int get_volume();

    int get_animalID();

};


#endif //ANIMAL_H
