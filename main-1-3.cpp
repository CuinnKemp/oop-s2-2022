#include <iostream>
#include <stdlib.h>


extern int num_count(int[], int, int);

int main(){
    int array[5] = {1,2,2,3, 4}; int n = 5; int number = 2;
    int sum = num_count(array, n, number);
    printf("%d\n", sum);

    return 0;
}
