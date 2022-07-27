#include <iostream>
#include <stdlib.h>


extern int max_element(int[], int);

int main(){
    int array[5] = {-1,2,3,4,5}; int n = 5;
    int sum = max_element(array, n);
    printf("%d\n", sum);
}