#include <iostream>
#include <string>
using namespace std;

#include "Musician.h"
#include "Orchestra.h"

int main(){
    Orchestra TurnipSquad;

    cout << TurnipSquad.get_current_number_of_members() << endl;

    Orchestra SaladTossers(7);

    SaladTossers.add_musician(Musician("Trumpet", 5));
    SaladTossers.add_musician(Musician("Trumpet", 2));
    SaladTossers.add_musician(Musician("Trumpet", 7));
    SaladTossers.add_musician(Musician("Guitar", 7));
    SaladTossers.add_musician(Musician("Guitar", 2));
    SaladTossers.add_musician(Musician("Guitar", 1));
    SaladTossers.add_musician(Musician("Drums", 10));

    cout << SaladTossers.get_current_number_of_members() << endl;
    cout << SaladTossers.has_instrument("Trumpet") << endl;
    for (int i = 0; i < SaladTossers.get_current_number_of_members(); i++){
        cout << SaladTossers.get_members()[i].get_instrument() << "     "<< SaladTossers.get_members()[i].get_experience() << endl;
    }

}
