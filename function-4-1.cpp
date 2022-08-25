int* matrix_max_min(int **vals,int num_rows, int num_cols){
    int* maxNmin = new int[2];

    int max = vals[0][0];
    int min = vals[0][0];

    for (int i = 0; i < num_rows; i++){
        for (int j = 0; j < num_cols; j++){
            if (vals[i][j] > max){
                max = vals[i][j];
            }
            if (vals[i][j] < min){
                min = vals[i][j];
            }
        }
    }

    maxNmin[0] = max;
    maxNmin[1] = min;

    return maxNmin;

}