#include <string>

float add_op(float left, float right){
    return (left + right);
}
float subtract_op(float left, float right){
    return (left - right);
}
float arithmetic_ops(float left, float right, std::string op){
    if (op == "add_op"){
        return add_op(left, right);
    }
    if (op == "subtract_op"){
        return subtract_op(left, right);
    }
    return -1;

}