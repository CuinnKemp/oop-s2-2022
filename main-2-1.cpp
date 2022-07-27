#include <iostream>
#include <stdlib.h>


extern int min_element(int[], int);

int main(){
    int array[5] = {6,2,3,4,5}; int n = 5;
    int sum = min_element(array, n);
    printf("%d\n", sum);

    return 0;
}
