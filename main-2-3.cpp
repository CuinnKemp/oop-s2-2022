#include <iostream>
#include <stdio.h>

extern void two_five_nine(int[], int);

int main(){
    int array[5] = {2,2,5,9,1}; int n = 5;
    two_five_nine(array, n);

    return 0;
}