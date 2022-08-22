#include <iostream>
using namespace std;

int* readNumbers(){
    int length = 10;
    int* numbers = new int[length];

    for (int i = 0; i < length; i++){
        cin >> numbers[i];
    }
    return numbers;
}
int secondSmallestSum(int *nums,int length){
    int min_sum = 99999;
    int test_sum = 0;
    for (int i = 0; i < length; i++){
        test_sum = 0;
        for (int j = i; j < length; j++){
            test_sum = nums[j] + test_sum;
            if (test_sum < min_sum){
                min_sum = test_sum;
            }
        }

    }
    int snd_min_sum = 99999;
    int same_mins = 0;

    for (int i = 0; i < length; i++){
        test_sum = 0;
        for (int j = i; j < length; j++){
            test_sum = nums[j] + test_sum;
            if (test_sum < snd_min_sum && test_sum > min_sum){
                snd_min_sum = test_sum;
            }
            if (test_sum == min_sum){
                same_mins++;
            }
        }
        if (same_mins >= 2){return min_sum;}

        return snd_min_sum;

    }




    return snd_min_sum;
}