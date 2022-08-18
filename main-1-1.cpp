#include <iostream>
#include <string>
using namespace std;


extern void string_2d_copy(string[][2], string[][2], int);

int main(){
    string first[3][2];
    first[0][0] = "hello ";
    first[0][1] = "my ";
    first[1][0] = "name ";
    first[1][1] = "is ";
    first[2][0] = "Cuinn ";
    first[2][1] = "Kemp ";

    string second[3][2];
    int n = 3;

    string_2d_copy(first, second, n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2; j++){
            cout << second[i][j];
        }
        cout << endl;
    }
}
