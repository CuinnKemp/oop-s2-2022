#include <stdio.h>
void print_pass_fail(char grade){
    switch(grade){
        case 'A':
            printf("Pass\n");
            break;

        case 'B':
            printf("Pass\n");
            break;
        
        case 'C':
            printf("Pass\n");
            break;

        case 'D':
            printf("Fail\n");
            break;

        case 'E':
            printf("Fail\n");
            break;
        
        default:
            printf("Nothing\n");
    }
}