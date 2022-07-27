double array_mean(int array[], int n){
    if (n < 1){
        return 0;
    }
    else{
        int sum = 0;
        for (int i = 0; i < n; i++){
            sum = sum + array[i];
        }
        double mean = sum/n;

        return mean;
    }
}