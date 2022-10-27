#include "Fleet.h"
#include <iostream>
using namespace std;

int main(){
    cout << "initial emmisions" << endl;
    Fleet* f1 = Fleet::createFleet(10);
    for (int i = 0; i < f1->get_count(); i++){
        cout << (f1->get_fleet()[i])->get_emissions() << endl;
    }
    cout << endl;

    cout << "emmisions after 10km" << endl;
    for (int i = 0; i < f1->get_count(); i++){
        (f1->get_fleet()[i])->drive(10);
        cout << (f1->get_fleet()[i])->get_emissions() << endl;
    }
    cout << endl;
    Tesla* t1 = new Tesla;

    f1->addCar(t1);

    cout << "emmisions after 10km more and new car added" << endl;
    for (int i = 0; i < f1->get_count(); i++){
        (f1->get_fleet()[i])->drive(10);
        cout << (f1->get_fleet()[i])->get_emissions() << endl;
    }
    cout << endl;
}