#include <iostream>
#include <stdio.h>

extern bool is_fanarray(int[], int);

int main(){
    int array[5] = {1,2,3,2,1}; int n = 5;
    bool fanarray = is_fanarray(array, n);

    printf("%d\n", fanarray);

    return 0;

}