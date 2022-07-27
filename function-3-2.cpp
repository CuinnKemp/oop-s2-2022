#include <stdio.h>
#include <bits/stdc++.h> 
using namespace std;  

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

int median_array(int array[], int n){
    if (n%2 == 0 || n < 1){
        return 0;
    }
    else{
        int check = is_ascending(array, n);
        if (check == 1){
            int median_index = n/2;
            return array[median_index];
            
        }
        else{
            int sort_array[n];
            for (int i = 0; i < n; i++){
                sort_array[i] = array[i];
            }
        
            sort(sort_array, sort_array + n);

            int median_index = n/2;
            int median = sort_array[median_index];
            return median;
        }
    }
}