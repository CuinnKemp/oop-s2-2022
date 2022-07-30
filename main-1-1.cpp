#include <stdio.h>

extern int sum_diagonal(int[4][4]);

int main(){
    int array[4][4] = {{1,1,1,1},{1,2,1,1},{1,1,2,1},{1,1,1,1}};
    int sum = sum_diagonal(array);

    printf("%d\n", sum);
}
