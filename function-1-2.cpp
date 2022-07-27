int array_mean(int array[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum = sum + array[i];
    }
    double mean = sum/n;

    return mean;
}