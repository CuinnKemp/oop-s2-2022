#include <string>
using namespace std;

#include "Person.h"
Person::Person(){
    Person::salary = 0;
    Person::name = "?";
}

Person::Person(int mySalary, string myName){
    Person::salary = mySalary;
    Person::name = myName;
} 
void Person::setName(string myName){
    Person::name = myName;
}
string Person::getName(){
    return Person::name;
}
void Person::setSalary(int mySalary){
    Person::salary = mySalary;
}
int Person::getSalary(){
    return Person::salary;
}