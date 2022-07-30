#include <stdio.h>
#include <cmath>

int transform(int number){
    int numberHold = number;
    int isNegative = 0;
    if (numberHold <= -1){
        isNegative = 1;
        numberHold = numberHold * -1;
    }

    int binaryDigits = log2(numberHold)+1;
    
    int binaryNumber = 0;

    for (int i = 0; i < binaryDigits; i++){
        binaryNumber = binaryNumber + ((numberHold % 2) * (pow(10, i)));
        numberHold = numberHold/2;
    }
    return binaryNumber;
}



int main(){
    int number;
    printf("Number in base 10: ");
    scanf("%d", &number);

    int binaryNumber = transform(number);
    printf("Number in base 2: %d\n", binaryNumber);

}