
#include "Musician.h"
#include "Orchestra.h"

Orchestra::Orchestra(){
    this->maxSize = 0;
    this->size = 0;
    this->members = new Musician[0];
}        
Orchestra::Orchestra(int size){
    this->maxSize = size;
    this->size = 0;
    this->members = new Musician[this->maxSize];
}   

int Orchestra::get_current_number_of_members(){
    return this->size;
}

bool Orchestra::has_instrument(std::string instrument){
    for (int i = 0; i < size; i++){
        if (this->members[i].get_instrument() == instrument){return 1;}
    }
    return 0;
}

Musician* Orchestra::get_members(){
    return this->members;
}
bool Orchestra::add_musician(Musician new_musician){
    if (size < maxSize){
        this->members[size] = new_musician;
        size++;  
        return 1;
    }
    else{return 0;}
}

Orchestra::~Orchestra(){
    delete[] this->members;
}