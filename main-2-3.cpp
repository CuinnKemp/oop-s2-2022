#include <stdio.h>

extern int sum_if_palindrome(int[],int);

int main(){
    int integers[] ={1,3,3,1}; int length = 4;
    int sum = sum_if_palindrome(integers, length);

    printf("%d \n", sum);
}