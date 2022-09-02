#include <iostream>
#include <string>
using namespace std;

#include "Capybara.h"

int main(){
    Capybara Cap[4];

    for (int i = 0; i < 4; i++){
        Cap[i].setAge(i);
        cout << Cap[i].getName() << ": " << Cap[i].getAge() << endl;
    }

    Cap[0].setName("Jim");
    Cap[1].setName("Tod");
    Cap[2].setName("Bob");
    Cap[3].setName("Gru");


    for (int i = 0; i < 4; i++){
        Cap[i].setAge(i);
        cout << Cap[i].getName() << ": " << Cap[i].getAge() << endl;
    }


    return 0;
}