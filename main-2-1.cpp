extern void multiples_of_seven(int*,int);

int main(){
    int length = 14;
    int* nums = new int[length];
    for (int i = 0; i < length; i++){
        *(nums + i) = i + 1;
    }

    multiples_of_seven(nums, length);

    delete[] nums;
}