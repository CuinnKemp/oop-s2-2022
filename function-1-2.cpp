#include <iostream>
#include <string>

using namespace std;

void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents){
    for (int i = 0; i < nstudents; i++){
        cout << "Report Card" << " ";
        for (int j = 0; j < 4; j++){
            cout << courses[j];
            if (j != 3){
                cout << " ";
            }
        }
        cout << endl;
        cout << students[i] << " ";
        for (int j = 0; j < 4; j++){
            cout << report_card[i][j];
            if (j != 3){
                cout << " ";
            }
        }
        cout << endl;
    }

}