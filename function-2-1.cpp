#include <iostream>
#include <string>
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

    if (isNegative == 1){
        binaryNumber = binaryNumber * -1;
    }

    return binaryNumber;
}


void print_binary_str(std::string decimal_number){
    int decNum = stoi(decimal_number);

    int binNum = transform(decNum);
    
    printf("%d\n", binNum);
}