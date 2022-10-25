#include "hunter.h"

int hunter::nextID = 1000;

hunter::hunter(string n, int v){
    this->name = n;
    this->volume = v;
    this->kills = 0;
    this->animalID = this->nextID;
    this->nextID++;
}

string hunter::get_name(){
    return "Hunter: " + this->name;
}

void hunter::set_kills(int k){
    this->kills = k;
}
int hunter::get_kills(){
    return this->kills;
}