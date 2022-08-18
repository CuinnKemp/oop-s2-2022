#include <iostream>
using namespace std;

extern int max_sub_sum(int*,int);

int main(){
    int length = 10;

    int nums[10] = { 31, -41, 59, 26, -53, 58, 97, -93, -23, 84 };

    int max_sum = max_sub_sum(nums, length);

    cout << max_sum << endl;
}