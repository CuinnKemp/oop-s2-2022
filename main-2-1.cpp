#include <string>
#include <iostream>
using namespace std;

extern string month_lookup(int);

int main(){
    for (int i = 0; i < 15; i++){
        cout << month_lookup(i) << endl;
    }
}