#include <stdio.h>

extern int is_identity(int[10][10]);

int main(){
    int array[10][10] = { 0 };
    for (int i = 0; i < 10; i++){
        array[i][i] = 1;
    }


    ////display array
    // for (int i = 0; i < 10; i++){
    //     for (int j = 0; j < 10; j++){
    //         printf("%d ", array[i][j]);
    //     } 
    //     printf("\n");
    // }

    
    int sum = is_identity(array);

    printf("%d\n", sum);
}
