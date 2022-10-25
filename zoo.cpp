#include "zoo.h"
#include "animal.h"

zoo::zoo(string n, int cows, int lions){
    this->name = n;
    this->number_of_animals = cows + lions;

    this->animals = new animal*[cows+lions];

    // for (int i = 0; i < cows; i++){
    //     animals[i] = new vegie("Daisy", 100);
    // }
    // for (int i = cows; i < this->number_of_animals; i++){
    //     animals[i] = new hunter("Clarence", 50);
    // }

    for (int i = 0; i < lions; i++){
        animals[i] = new hunter("Clarence", 50);
    }
    for (int i = lions; i < this->number_of_animals; i++){
        animals[i] = new vegie("Daisy", 100);
    }
}

string zoo::get_name(){
    return this->name;
}

int zoo::get_number_of_animals(){
    return this->number_of_animals;
}

animal** zoo::get_animals(){
    return this->animals;
}