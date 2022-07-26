#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else

int count(int array[], int arrayLength) {
    int evens = 0;
    for (int i = 0; i < arrayLength; i++){
        if (array[i]%2 == 0){
            evens++;
        }
    }

    return evens;
}