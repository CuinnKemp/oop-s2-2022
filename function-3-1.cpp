bool is_fanarray(int array[], int n){
    if (n < 1){
        return 0;
    }

    bool fanarray = 1;
    for (int i = 0; i < n; i++){
        if (array[i] != array[n-1-i]){
            fanarray = 0;
            return fanarray;
        }
    }
    return fanarray;
}