#include <iostream>
#include <string>
using namespace std;

#include "Person.h"

int main(){
    Person p1(0,"?");
    Person p2(0,"?");
    Person p3(0,"?");
    Person p4(0,"?");

    cout << p1.getName() << ": " << p1.getSalary() << endl;
    cout << p2.getName() << ": " << p2.getSalary() << endl;
    cout << p3.getName() << ": " << p3.getSalary() << endl;
    cout << p4.getName() << ": " << p4.getSalary() << endl;

    p1.setName("Jim");
    p2.setName("Tod");
    p3.setName("Bob");
    p4.setName("Gru");

    p1.setSalary(1234);
    p2.setSalary(5678);
    p3.setSalary(91011);
    p4.setSalary(121314);
    
    cout << p1.getName() << ": " << p1.getSalary() << endl;
    cout << p2.getName() << ": " << p2.getSalary() << endl;
    cout << p3.getName() << ": " << p3.getSalary() << endl;
    cout << p4.getName() << ": " << p4.getSalary() << endl;

    return 0;

}