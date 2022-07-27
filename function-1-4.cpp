#include <stdio.h>

int sum_two_arrays(int array[], int secondarray[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum = sum + array[i] + secondarray[i];
    }

    return sum;
}