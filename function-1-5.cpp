int size_of_array_arr(){
    int *arr = new int[3];

    int arrsize = sizeof(arr[0]);
    arrsize = arrsize + sizeof(arr[1]);
    arrsize = arrsize + sizeof(arr[2]);

    return arrsize;
}