#include <stdio.h>

extern void count_digits(int[4][4]);

int main(){
    int array[4][4];
    
    for (int k = 0; k < 10; k++){
        printf("Test: %d\n", k);
        for (int i = 0; i < 4; i++){
            for (int j = 0; j < 4; j++){
                array[i][j] = k;
                printf("%d ", array[i][j]);
            } 
            printf("\n");
        }

        count_digits(array);
        printf("\n\n\n");
    }
}
