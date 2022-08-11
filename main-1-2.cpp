#include <iostream>
#include <string>

using namespace std;

extern void print_class(std::string [4], std::string [], int [][4], int);

int main(){
    string courses[4];
    string students[4]; int nstudents = 4;
    int report_card[nstudents][4];
    courses[0] = "Maths"; courses[1] = "Science"; courses[2] = "PE"; courses[3] = "History";
    students[0] = "Bill"; students[1] = "Bob"; students[2] = "Barry"; students[3] = "Billy";
    for (int i = 0; i < nstudents; i++){
        for (int j = 0; j < 4; j++){
            report_card[i][j] = i * j + j;
        }
    }
    print_class(courses, students, report_card, nstudents);
}