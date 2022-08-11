#include <iostream>
using namespace std;

extern int palindrome_sum(int[], int);

int main(){
    int array[5] = {1,2,1,2,1}; int length = 5;
    
    cout << palindrome_sum(array, length) << endl;
}