#include <stdio.h>

int num_count(int array[], int n, int number){
    int sum = 0;
    for (int i = 0; i < n; i++){
        if (array[i] == number){
            sum = sum + 1;
        }
    }

    return sum;
}