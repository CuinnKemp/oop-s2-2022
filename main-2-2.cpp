#include <iostream>

using namespace std;

extern int bin_to_int(int[], int);

int main(){
    int binary_number[2] = {1,0}; int number_of_digits = 2;

    int number = bin_to_int(binary_number, number_of_digits);

    cout << number << endl;

}