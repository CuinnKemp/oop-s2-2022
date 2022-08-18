#include <iostream>
using namespace std;
#include <cmath>

void multiples_of_seven(int *nums,int length){
    for (int i = 0; i < length; i++){
        if (remainder(*(nums + i), 7) == 0){
            cout << *(nums + i) << endl;
        }
    }


}   