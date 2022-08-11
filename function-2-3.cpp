bool is_array_palindrome(int integers[], int length){
    bool palindrome = 1;
    if (length <= 0){
        return false;
    }
    for (int i = 0; i < length; i++){
        if (integers[i] != integers[length-1-i]){
            palindrome = 0;
            return palindrome;
        }
    }
    return palindrome;
}

int sum_integers(int integers[], int length){
    if (length <= 0){
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < length; i++){
        sum = sum + integers[i];
    }
    return sum;
}


int palindrome_sum(int integers[], int length){
    if (length <= 0){
        return -1;
    }
    if (is_array_palindrome(integers, length) == false){
        return -2;
    }
    
    return sum_integers(integers, length);
}