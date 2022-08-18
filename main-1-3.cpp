#include <iostream>
using namespace std;

extern void copy_integers(int[],int[],int);


int main(){
    int length = 3;
    int* old_array = new int[length];
    *(old_array) = 1;
    *(old_array + 1) = 2;
    *(old_array + 2) = 3;
    int* new_array = new int[length];

    copy_integers(old_array, new_array, length);

    for (int i = 0; i < length; i++){
        cout << *(new_array + i) << " ";
    }
    cout << endl;

    delete[] old_array;
    delete[] new_array;
}