#include <string>
#include <iostream>
using namespace std;

#include "animal.h"
#include "hunter.h"

int main(){
    hunter h1("barry", 40);

    cout << h1.get_animalID() << endl;
    cout << h1.get_name() << endl;
    cout << h1.get_volume() << endl;
    cout << h1.get_kills() << endl;
    cout << h1.get_animalID() << endl;

    h1.set_name("Jim");
    h1.set_volume(55);
    h1.set_kills(3);

    cout << h1.get_name() << endl;
    cout << h1.get_volume() << endl;
    cout << h1.get_kills() << endl;

    return 0;
}