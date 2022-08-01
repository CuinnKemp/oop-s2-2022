#include <stdio.h>

void print_summed(int array1[3][3],int array2[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            array1[i][j] = array1[i][j] + array2[i][j];
        }
    }
    printf("%d %d %d\n%d %d %d\n%d %d %d",array1[0][0], array1[0][1], array1[0][2], array1[1][0], array1[1][1], array1[1][2], array1[2][0], array1[2][1], array1[2][2]);
}