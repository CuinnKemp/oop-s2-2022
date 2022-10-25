#include "vegie.h"

int vegie::nextID = 100;

vegie::vegie(string n, int v){
    this->name = n;
    this->volume = v;
    this->favourite_food = "";
    this->animalID = this->nextID;
    this->nextID++;
}

string vegie::get_name(){
    return "Safe: " + this->name;
}

void vegie::set_favourite_food(string ff){
    this->favourite_food = ff;
}

string vegie::get_favourite_food(){
    return this->favourite_food;
}