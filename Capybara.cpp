#include <string>
using namespace std;

#include "Capybara.h"

Capybara::Capybara(){
    Capybara::name = "?";
    Capybara::age = 0;
}

void Capybara::setName(string capyName){
    Capybara::name = capyName;
}

string Capybara::getName(){
    return Capybara::name;
}

void Capybara::setAge(int capyAge){
    Capybara::age = capyAge;
}

int Capybara::getAge(){
    return Capybara::age;
}