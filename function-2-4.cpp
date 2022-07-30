
int array_min(int integers[], int length){
    if (length <= 0){ return -1;}
    int min = integers[0];
    for (int i = 1; i < length; i++){
        if (integers[i] < min){
            min = integers[i];
        }
    }
    return min;
}

int array_max(int integers[], int length){
    if (length <= 0){ return -1;}
    int max = integers[0];
    for (int i = 1; i < length; i++){
        if (integers[i] > max){
            max = integers[i];
        }
    }
    return max;
}

int sum_min_max(int integers[], int length){
    if (length <= 0){ return -1;}
    int max = array_max(integers, length);
    int min = array_min(integers, length);

    int sum = max + min;

    return sum;
}