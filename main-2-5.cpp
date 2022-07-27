#include <iostream>
#include <stdio.h>

extern bool is_descending(int[], int);

int main(){
    int array[5] = {5,4,3,2,1}; int n = 5;
    bool descending = is_descending(array, n);

    printf("%d\n", descending);

    return 0;

}