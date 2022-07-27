#include <stdio.h>
void two_five_nine(int array[], int n){
    int counter[3] = {0,0,0};
    for (int i = 0; i < n; i++){
        switch (array[i]){
            case 2:
                counter[0]++;
                break;
            
            case 5:
                counter[1]++;
                break;

            case 9:
                counter[2]++;
                break;
        }
    }
    printf( "2:%d;5:%d;9:%d;\n", counter[0], counter[1], counter[2]);
}