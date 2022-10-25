#include <iostream>
#include <string>
using namespace std;

#include "animal.h"
#include "hunter.h"
#include "vegie.h"
#include "zoo.h"

int main(){
    zoo z1("adelaide zoo", 5, 4);

    cout << z1.get_name() << endl;
    cout << z1.get_number_of_animals() << endl;

    for (int i = 0; i < z1.get_number_of_animals(); i++){
        cout << z1.get_animals()[i]->get_name() << "  " << z1.get_animals()[i]->get_volume() << "   " << z1.get_animals()[i]->get_animalID() << endl;
    }

    return 0;
}