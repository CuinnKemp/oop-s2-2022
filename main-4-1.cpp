#include <iostream>
using namespace std;

extern int* matrix_max_min(int**,int, int);

int main(){
    int row1[]={10,15,99};
    int row2[]={100,5,73};
    int row3[]={23,56,1};
    int *vals[]={row1,row2,row3};
    int nrows=3;
    int ncols=3;
    int* maxNmin = matrix_max_min(vals,nrows,ncols);

    cout << maxNmin[0] << "," << maxNmin[1] << endl;

    delete[] maxNmin;
}