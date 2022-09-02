#include <stdio.h>

extern int sum_min_max(int[],int);

int main(){
    int integers[] ={1,9,3,1}; int length = 4;
    int sum = sum_min_max(integers, length);

    printf("%d \n", sum);
}