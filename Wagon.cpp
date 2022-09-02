#include <string>
#include <iostream>
using namespace std;

#include "Capybara.h"
#include "Wagon.h"

Wagon::Wagon(){
    Wagon::capyCount = 0;
}   

bool Wagon::addCapybara(Capybara newCapy){
    if (capyCount < 4){
        Wagon::Capies[capyCount] = newCapy;
        Wagon::capyCount++;
        return 1;
    }
    else{
        return 0;
    }
}   

void Wagon::emptyWagon(){
    Wagon::capyCount = 0;
}                
void Wagon::printCapybaras(){
    for (int i = 0; i < capyCount; i++){
        cout << Capies[i].getName() << " " << Capies[i].getAge() << endl;
    }
}