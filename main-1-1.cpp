#include <iostream>
#include <stdlib.h>

extern int array_sum(int[], int);

int main(){
    int array[5] = {2,2,2,2,2}; int n = 5;
    int sum = array_sum(array, n);
    printf("%d\n", sum);
    
    return 0;
}