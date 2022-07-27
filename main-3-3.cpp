#include <iostream>
#include <stdio.h>

extern double weighted_average(int[], int);

int main(){
    int array[6] = {1,2,1,4,1,3}; int n = 6;
    double avg = weighted_average(array, n);
    printf("%.1f\n", avg);

    return 0;
}