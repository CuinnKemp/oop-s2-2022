#include <string>
#include <iostream>
using namespace std;

#include "animal.h"
#include "vegie.h"

int main(){
    vegie h1("barry", 40);

    cout << h1.get_animalID() << endl;
    cout << h1.get_name() << endl;
    cout << h1.get_volume() << endl;
    cout << h1.get_favourite_food() << endl;
    cout << h1.get_animalID() << endl;

    h1.set_name("Jim");
    h1.set_volume(55);
    h1.set_favourite_food("apples");

    cout << h1.get_name() << endl;
    cout << h1.get_volume() << endl;
    cout << h1.get_favourite_food() << endl;

    return 0;
}