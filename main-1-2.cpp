#include <iostream>
#include <stdlib.h>


extern double array_mean(int[], int);

int main(){
    int array[5] = {1,2,3,4,5}; int n = 5;
    double mean = array_mean(array, n);
    printf("%.2f\n", mean);

    return 0;
}
