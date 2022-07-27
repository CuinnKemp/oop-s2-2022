#include <iostream>
using namespace std;

extern int array_sum(int[], int);

int main(){
    int array[5] = {2,2,2,2,2}; int n = 5;
    int sum = array_sum(array, n);
    cout << sum << "\n";
}