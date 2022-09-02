#include <stdio.h>
void count_digits(int array[4][4]){
    int store_count[10] = { 0 };
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            for (int k = 0; k < 10; k++){
                if (array[i][j] == k){
                    store_count[k] = store_count[k] + 1;
                }
            }
        }
    }

    for (int k = 0; k < 10; k++){
        printf("%d:%d;", k, store_count[k]);
    }
    printf("\n");

}