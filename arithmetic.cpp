#include <stdio.h>
#include <cmath>

int isBinary(int binaryNumber){

    //Checks if any digit is greater than 2 if it is then the number is not binary

    int chckLength = log10(binaryNumber);
    int digit = 0; int chck = 0; int isBinary = 1;
    for (int i = chckLength; i > -1; i--){
        chck = (binaryNumber - (digit));

        chck = chck/pow(10,i);

        digit = digit + chck * pow(10,i);

        if (chck != 1 && chck != 0){
            isBinary = 0;
            return isBinary;
        }
    }

    // 0 not binary 1 binary
    return isBinary;
    
}

int addBinary(int numberA, int numberB){
    if (isBinary(numberA) == 0 || isBinary(numberB) == 0){
        printf("\nError: At Least One Number is Not Binary\n");
        return -1;
    }
    else if (numberA < 0 || numberB < 0){
        printf("Error: At least One Number is Negative");
        return -1;
    }
    else{
        //create crude sum (not binary)
        int crudeSum = numberA + numberB;
        
        //get length of crudeSum
        int chckLength = log10(crudeSum);

        //create array for digits to be held
        int crudeArray[chckLength+1];

        //get digits and store them in array
        int digit = 0; int chck = 0;
        for (int i = chckLength; i > -1; i--){
            chck = (crudeSum - (digit));

            chck = chck/pow(10,i);
            crudeArray[chckLength - i] = chck;
            digit = digit + chck * pow(10,i);
        }

        //using array identify digits greater than 2 (if they are greater than 2 then they must be 3)
        for (int i = chckLength; i > -1; i--){
            if (crudeArray[i] >= 2){
                //if a digit is greater than 2 then make the digit next to be analysed 1 greater
                crudeArray[i-1] = crudeArray[i-1] + 1;
                //subtract 2 from the digit
                crudeArray[i] = crudeArray[i] - 2;
            }
        }

        // create variable to store the binary sum
        int actualSum = 0;

        //create the actual sum
        for (int i = 0; i < chckLength + 1; i++){
            actualSum = actualSum + crudeArray[i]*pow(10,chckLength-i);
        }
        
        //return the sum
        return actualSum;
    }

}



int main(){
    int checkNumber = addBinary(1011010011, 1111011);

    printf("%d\n", checkNumber);
}