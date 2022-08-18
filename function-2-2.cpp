int max_sub_sum(int *nums,int length){
    if (length < 1){
        return 0;
    }
    
    bool positivlyPresent = 0;

    for (int i = 0; i < length; i++){
        if (nums[i] > -1){
            positivlyPresent = 1; 
        }
    }
    if (positivlyPresent == 0){
        return 0;
    }

    int max_sum = 0;
    int test_sum = 0;

    for (int i = 0; i < length; i++){
        test_sum = 0;
        for (int j = i; j < length; j++){
            test_sum = nums[j] + test_sum;
            if (test_sum > max_sum){
                max_sum = test_sum;
            }
        }

    }

    return max_sum;
}