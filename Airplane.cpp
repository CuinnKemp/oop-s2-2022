#include <string>
#include <iostream>
using namespace std;

#include "Person.h"
#include "Airplane.h"

Airplane::Airplane(string theCallsign, Person thePilot, Person theCoPilot){
    Airplane::callsign = theCallsign;
    Airplane::pilot.setName(thePilot.getName());
    Airplane::pilot.setSalary(thePilot.getSalary());
    Airplane::copilot.setName(theCoPilot.getName());
    Airplane::pilot.setSalary(theCoPilot.getSalary());
}
void Airplane::setPilot(Person thePilot){
    Airplane::pilot = thePilot;
}
Person Airplane::getPilot(){
    return Airplane::pilot;
}
void Airplane::setCoPilot(Person theCoPilot){
    Airplane::copilot = theCoPilot;
}
Person Airplane::getCoPilot(){
    return Airplane::copilot;
}
void Airplane::printDetails(){
    cout << Airplane::callsign << endl;
    cout << Airplane::pilot.getName() << endl; 
    cout << Airplane::copilot.getName() << endl;
}   