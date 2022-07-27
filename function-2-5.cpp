bool is_descending(int array[], int n){
    if (n < 1){
        return 0;
    }

    bool descending = 1;
    for (int i = 1; i < n; i++){
        if (array[i-1] < array[i]){
            descending = 0;
            return descending;
        }
    }
    return descending;
}