bool is_palindrome(int integers[], int length){
    if (length <= 0){
        return -1;
    }
    
    bool check = 1;
    for (int i = 0; i < length; i++){
        if(integers[i] != integers[length-1-i]){
            check = 0;
            return check;
        }
    }
    return check;
}

int sum_array_elements(int integers[], int length){
    if (length <= 0){
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < length; i++){
        sum = sum + integers[i];
    }
    return sum;
}

int sum_if_palindrome(int integers[], int length){
    if (length <= 0){
        return -1;
    }
    else if (is_palindrome(integers, length) == 1){
        int sum = sum_array_elements(integers, length);

        return sum;
    }
    else{
        return -2;
    }
}

