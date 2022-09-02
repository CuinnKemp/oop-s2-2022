#include <stdio.h>

extern int binary_to_int(int[], int);

int main(){
    int binary_array[9] = {1,0,0,1,0,1,1,0,0}; int length = 9;
    int decNum = binary_to_int(binary_array, length);
    printf("%d\n", decNum);
}