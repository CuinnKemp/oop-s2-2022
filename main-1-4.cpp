#include <iostream>
#include <stdlib.h>


extern int sum_two_arrays(int[], int[], int);

int main(){
    int array[5] = {1,2,3,4,5}; int secondarray[5] = {1,2,3,4,5}; int n = 5;
    int sum = sum_two_arrays(array, secondarray, n);
    printf("%d\n", sum);
}
