#include <iostream>
#include <string>
using namespace std;

#include "Person.h"
#include "Airplane.h"

int main(){
    Person p1(0,"?");
    Person p2(0,"?");
    Person p3(0,"?");

    p1.setName("Jim");
    p2.setName("Tod");
    p3.setName("Bob");

    p1.setSalary(1234);
    p2.setSalary(5678);
    p3.setSalary(91011);
    
    Airplane Plane("1234", p1, p2);

    Plane.printDetails();

    Plane.setPilot(p3);
    Plane.setCoPilot(p1);
    
    Plane.printDetails();


    return 0;
}