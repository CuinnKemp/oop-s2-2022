#include <iostream>
#include <string>
using namespace std;

#include "Capybara.h"
#include "Wagon.h"

int main(){
    Capybara Cap[5];

    Cap[0].setName("Jim");
    Cap[1].setName("Tod");
    Cap[2].setName("Bob");
    Cap[3].setName("Gru");
    Cap[4].setName("Ben");

    Wagon wag;
    bool check;
    for (int i = 0; i < 5; i++){
        Cap[i].setAge(i);
        check = wag.addCapybara(Cap[i]);
        if (check == 0){
            cout << Cap[i].getName() << ", of age: " << Cap[i].getAge() << ", is unable to fit in the wagon!!!" << endl;
        }
    }

    wag.printCapybaras();

    return 0;

}