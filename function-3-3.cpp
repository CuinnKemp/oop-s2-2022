#include <stdio.h>
double counter(int array[], int n, int number){
    double count = 0;
    for (int i = 0; i < n; i++){
        if (array[i] == number){
            count++;
        }
    }
    return count;
}

double weighted_average(int array[], int n){
    double avg = 0;
    double count = 0;
    for (int i = 0; i < n; i++){
        count = counter(array, n, array[i]);
        avg = avg + (array[i]*count)/n;
    }
    return avg;
}