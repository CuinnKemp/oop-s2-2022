#include <stdio.h>
int is_identity(int array[10][10]){
    int identity = 1;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (i == j && array[i][j] != 1){
                identity = 0;
                return identity; 
            }
            else{
                if (i != j && array[i][j] != 0){
                    identity = 0;
                    return identity;
                } 
            }
        }
    }
    return identity;
}