#include <string>
using namespace std;

string month_lookup(int month){

    if (month < 1 || month > 12){
        return "invalid month";
    }

    string months[12] = {"January", "Feburary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    return months[month-1];
}