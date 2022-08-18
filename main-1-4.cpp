#include <iostream>
using namespace std;

extern void copy_doubles(double*,double*,int);


int main(){
    int length = 3;
    double* old_array = new double[length];
    *(old_array) = 1.23;
    *(old_array + 1) = 2.13;
    *(old_array + 2) = 3.12;
    double* new_array = new double[length];

    copy_doubles(old_array, new_array, length);

    for (int i = 0; i < length; i++){
        cout << *(new_array + i) << " ";
    }
    cout << endl;

    delete[] old_array;
    delete[] new_array;
}