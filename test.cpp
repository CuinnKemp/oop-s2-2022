#include <cmath>
#include <sys/ioctl.h>
#include <iostream>
using namespace std;
#include <unistd.h>
#define pi = 3.14159265;

//create Plane
class Plane{
    // private details
    private:
        //direction vectors of the plane using formula r = (a,b,c) + s(d,e,f) + t(g,h,i)
        double directionVector1[3] = {cos(angle),sin(angle),0};
        double directionVector2[3] = {0,0,1};

        //the normal vector of the plane (vector perpendicular to the plane) 
        double normalVector[3] = {sin(angle), -cos(angle), 0};

        //the angle the plane makes with the x-axis
        double angle = 0;

        //NOTE*** all direction vectors have a magnitude of 1 to allow for the point to be placed onto a 2d screen
    public:
        // change the angle the plane makes with the x-axis and changing the vectors that utillize this angle
        void set_angle(double new_angle){
            angle = new_angle;
            normalVector[0] = sin(angle);
            normalVector[1] = -cos(angle);
            directionVector1[0] = cos(angle);
            directionVector1[1] = sin(angle);
        }

        // given a point find the projection of the point on the plane
        double* findPointOnPlane(double point[3]){
            // create a pointer to a 1x2 double array (this will be the array returned)
            double* pointOnPlane = new double[2];
            
            // calculate the value of lambda in vector equation of line r = point - lambda * normalvector
            double lambda = ((-point[0]) * sin(angle) + point[1] * cos(angle)) / (-pow(sin(angle),2) - pow(cos(angle),2));

            // using lambda calculate the value of x and z in 3d and then find the ~x and ~y coordinates that this has on the plane
            // i.e. the amount of s's (~x) and t's (~y) in formula r = (a,b,c) + s(d,e,f) + t(g,h,i)
            pointOnPlane[0] = (point[0] - (lambda * normalVector[0]))/(cos(angle));
            pointOnPlane[1] = (point[2] - (lambda * normalVector[2]));
            

            return pointOnPlane;
        }

};

class Screen{
    private:

    Screen(){
        
    }
};

int main(){
    // find size of terminal window (for viewing){
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
    //} end of finding terminal window size credit ProjectPhysX https://stackoverflow.com/questions/23369503/get-size-of-terminal-window-rows-columns

    // create an array of the size of the terminal
    int array[lines][cols] = {0};

    // create an array with the dimensions of the array
    int dimensions[2] = {lines, cols};

    // create a Screen object
    Plane Plane1;

    double point[3] = {0,6,0};
    Plane1.set_angle(0);
    double* pointOnPlane = Plane1.findPointOnPlane(point);
    cout << pointOnPlane[0]<< " " << pointOnPlane[1] << endl;
    int* pointInArray = new int[2];
    for (int i = 0; i < 2; i++){
        pointInArray[i] = dimensions[1-i]/2 + round(pointOnPlane[i]);
    }
    if (pointInArray[1] <= lines){
        if (pointInArray[0] <= cols){
            array[pointInArray[1]][pointInArray[0]] = 1;
        }
    }

    for (int i = 0; i < lines; i++){
        for (int j = 0; j < cols; j++){
            if (array[i][j] == 1){
                cout << "█";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    } 
    cout << lines <<"  " << cols << endl;


    
    
    delete[] pointOnPlane;
}