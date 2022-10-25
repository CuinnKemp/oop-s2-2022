#include "animal.h"

animal::animal(string n, int v){
    this->name = n;
    this->volume = v;
    this->animalID = 0;
}
    
void animal::set_name(string n){
    this->name = n;
}

void animal::set_volume(int v){
    this->volume = v;
}
int animal::get_volume(){
    return this->volume;
}

int animal::get_animalID(){
    return this->animalID;
}