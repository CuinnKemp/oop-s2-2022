bool is_ascending(int array[], int n){
    if (n < 1){
        return 0;
    }

    bool ascending = 1;
    for (int i = 1; i < n; i++){
        if (array[i-1] > array[i]){
            ascending = 0;
            return ascending;
        }
    }
    return ascending;
}