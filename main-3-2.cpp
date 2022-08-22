#include <iostream>
using namespace std;

extern int* readNumbers();
extern bool equalsArray(int*,int*,int);
int* reverseArray(int*,int);

int main(){
    int* numbers1 = readNumbers();

    int* numbers2 = reverseArray(numbers1, 10);

    cout << equalsArray(numbers1, numbers2, 10) << endl;

    delete[] numbers1;

    delete[] numbers2;

    return 0;
}