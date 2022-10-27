#include <iostream>
using namespace std;

#include "Ford.h"

int main(){
    Ford t1('s', 1000);
    cout << t1.get_price() << endl;
    cout << t1.get_emissions() << endl;
    cout << t1.get_vinNumber() << endl;

    t1.drive(100);

    cout << t1.get_price() << endl;
    cout << t1.get_emissions() << endl;
    cout << t1.get_vinNumber() << endl;


}