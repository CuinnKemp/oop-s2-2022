#include <iostream>
using namespace std;

int* readNumbers(){
    int* numbers = new int[10];

    for (int i = 0; i < 10; i++){
        cin >> numbers[i];
    }
    return numbers;
}


bool equalsArray(int *numbers1,int *numbers2,int length){
    bool tf = 0;
    
    if (length < 1){return tf;}

    tf = 1;
    for (int i = 0; i < length; i++){
        if (numbers1[i] != numbers2[i]){tf = 0; return tf;}
    }

    return tf;
}