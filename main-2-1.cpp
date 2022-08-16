#include <iostream>
#include <string>
using namespace std;

extern float add_op(float, float);
extern float subtract_op(float, float);
extern float arithmetic_ops(float, float,string);


int main(){
    float left = 1.02;
    float right = 2.01;
    cout << add_op(left, right) << endl;
    cout << subtract_op(left,right) << endl;
    cout << arithmetic_ops(left, right, "+") << endl;
    cout << arithmetic_ops(left, right, "-") << endl;
}