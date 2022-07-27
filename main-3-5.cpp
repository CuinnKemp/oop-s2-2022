#include <iostream>
#include <stdio.h>

extern double sum_even(double[],int);

int main(){
    double array[6] = {4.1,2.1,3.1,6.1,5.1,1.1}; int n = 6;
    double evensum = sum_even(array, n);
    printf("%.2f\n", evensum);

    return 0;
}