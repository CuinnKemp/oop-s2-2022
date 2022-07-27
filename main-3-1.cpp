#include <iostream>
#include <stdio.h>

extern bool is_fanarray(int[], int);

int main(){
    int array[6] = {1,2,3,3,2,1}; int n = 6;
    bool fanarray = is_fanarray(array, n);

    printf("%d\n", fanarray);

    return 0;

}