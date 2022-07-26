#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count(int[], int);

int main() {
    //Test Case 0:
    int array[5] = {4,5,6,7,8}; int n = 5; //expect output "The number is: 3" testing basic functionality case

    //Test Case 1:
    //int array[10] = {1,2,3,4,5,6,7,8,9,10}; int n = 10; //expect output "The number is: 5" testing basic functionality case

    //Test Case 2:
    //int array[6] = {-1,-2,-3,-0,-5,-6}; int n = 6; //expect output "The number is: 3" testing negqtive and zero case

    //Test Case 3:
    //int array[3] = {1,3,5}; int n = 3; //expect output "The number is: 0" testing what occurs when no evens are present


    std::cout << "The number is: " << count(array, n) << std::endl;
    return 0;
}