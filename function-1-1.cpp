#include <iostream>
using namespace std;

int* create_integers(int num_vals, int start){
    int* integers = new int[num_vals];

    int number = start;
    for (int i = 0; i < num_vals; i++){
        integers[i] = number;
        number++;
    }

    return integers;
}


void array_display(int *vals, int num_vals){
    for (int i = 0; i < num_vals; i++){
        
        cout << vals[i] << " ";
    }
    cout << endl;
}