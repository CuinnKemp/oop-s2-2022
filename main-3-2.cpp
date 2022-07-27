#include <iostream>
#include <stdio.h>

extern int median_array(int[], int);

int main(){
    int array[11] = {4,2,3,6,5,1,7,8,9,10,11}; int n = 11;
    int median = median_array(array, n);
    printf("%d\n", median);

    return 0;
}