#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <string>
using namespace std;

#include "Person.h"

class Airplane{
    private:
    Person pilot;
    Person copilot;
    string callsign;

    public:
    // a pilot and copilot must be provided when creating an airplane
    Airplane(string theCallsign, Person thePilot, Person theCoPilot);
    void setPilot(Person thePilot);      // change the pilot
    Person getPilot();
    void setCoPilot(Person theCoPilot);  // change the co-pilot
    Person getCoPilot();
    void printDetails();                 // print the callsign, a new line, the pilot name,
                                        // a new line, the co-pilot name and a final newline.
    
};

#endif //AIRPLANE_H