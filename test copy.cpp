#include <cmath>
#include <sys/ioctl.h>
#include <iostream>
using namespace std;
#include <unistd.h>
#define pi = 3.14159265;

class Screen{
    private:
        double directionVector1[3] = {cos(angle),sin(angle),0};
        double directionVector2[3] = {0,0,1};
        double normalVector[3] = {sin(angle), -cos(angle), 0};
        double angle = 0;
    public:
        void set_angle(double new_angle){
            angle = new_angle;
            normalVector[0] = sin(angle);
            normalVector[1] = -cos(angle);
            directionVector1[0] = cos(angle);
            directionVector1[1] = sin(angle);
        }

        double* findPointOnPlane(double point[3]){
            double* pointOnPlane = new double[2];
            for (int i = 0; i < 2; i++){
                pointOnPlane[i] = -99;
            }
            double lambda = ((-point[0])*sin(angle)+point[1]*cos(angle))/(-pow(sin(angle),2)-pow(cos(angle),2));
            if (lambda < 0){
                return pointOnPlane;
            }
            pointOnPlane[0] = (point[0] - (lambda * normalVector[0]))/(cos(angle));
            pointOnPlane[1] = (point[2] - (lambda * normalVector[2]));
            

            return pointOnPlane;
        }

};

int main(){
    int cols = 80;
    int lines = 24;

    #ifdef TIOCGSIZE
        struct ttysize ts;
        ioctl(STDIN_FILENO, TIOCGSIZE, &ts);
        cols = ts.ts_cols;
        lines = ts.ts_lines;
    #elif defined(TIOCGWINSZ)
        struct winsize ts;
        ioctl(STDIN_FILENO, TIOCGWINSZ, &ts);
        cols = ts.ws_col;
        lines = ts.ws_row;
    #endif /* TIOCGSIZE */

    int array[lines][cols] = {0};

    Screen Screen1;

    double point[3] = {1,2,3};
    double* pointOnPlane = Screen1.findPointOnPlane(point);
    cout << pointOnPlane[0]<< " " << pointOnPlane[1] << endl;
    for (int i = 0; i < 3; i++){
        pointOnPlane[i] = round(pointOnPlane[i]);
    }
    
    
    delete[] pointOnPlane;
}