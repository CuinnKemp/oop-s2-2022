#include <string>

#include "Musician.h"

Musician::Musician(){
    this->instrument = "null";
    this->experience = 0;
}             
Musician::Musician(std::string instrument, int experience){
    this->instrument = instrument;
    this->experience = experience;
}      
std::string Musician::get_instrument(){
    return this->instrument;
}    
int Musician::get_experience(){
    return this->experience;
}