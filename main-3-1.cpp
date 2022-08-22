#include <iostream>
using namespace std;

extern int* readNumbers() ;
extern bool equalsArray(int*,int*,int) ;

int main(){
    int* numbers1 = readNumbers();

    int* numbers2 = readNumbers();

    cout << equalsArray(numbers1, numbers2, 10) << endl;

    delete[] numbers1;

    delete[] numbers2;

    return 0;
}