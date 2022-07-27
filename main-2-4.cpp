#include <iostream>
#include <stdio.h>

extern bool is_ascending(int[], int);

int main(){
    int array[5] = {1,5,7,8,9}; int n = 5;
    bool ascending = is_ascending(array, n);

    printf("%d\n", ascending);

    return 0;

}