#include <iostream>
#include <stdlib.h>


extern int count_evens(int);

int main(){
    int number = 10;
    int sum = count_evens(number);
    printf("%d\n", sum);
}
