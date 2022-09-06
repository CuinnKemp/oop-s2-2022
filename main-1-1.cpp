#include <iostream>
#include <string>
using namespace std;

#include "Musician.h"

int main(){
    Musician Jerry;
    cout << Jerry.get_instrument() << "   " << Jerry.get_experience() << endl;

    Musician Bob("violin", 12);
    cout << Bob.get_instrument() << "   " << Bob.get_experience() << endl;

    return 0;
}