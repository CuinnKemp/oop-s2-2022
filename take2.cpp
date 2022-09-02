//https://www.geogebra.org/3d/rgvcpwmx example of whats happening (press play on the t slider or drag it up to u `U`)


#include <cmath>
#include <sys/ioctl.h>
#include <iostream>
using namespace std;
#include <unistd.h>
#include <stdlib.h>
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

            if (lambda > 0){
                pointOnPlane[0] = 99999999;
                pointOnPlane[1] = 99999999;
                return pointOnPlane;
            }
        
            // using lambda calculate the value of x and z in 3d and then find the ~x and ~y coordinates that this has on the plane
            // i.e. the amount of s's (~x) and t's (~y) in formula r = (a,b,c) + s(d,e,f) + t(g,h,i)
            pointOnPlane[0] = (point[0] - (lambda * normalVector[0]))/(cos(angle));
            pointOnPlane[1] = (point[2] - (lambda * normalVector[2]));
            

            return pointOnPlane;
        }

};

class Screen{
    private:
        int* dimensions;
        int* array;
    public:
        void togglePointOnScreen(double point[2]){
            int* pointInArray = new int[2];
            for (int i = 0; i < 2; i++){
                pointInArray[i] = dimensions[1-i]/2 + round(point[i]);
            }
            if (pointInArray[1] <= dimensions[0]){
                if (pointInArray[0] <= dimensions[1]){
                    array[pointInArray[1] * (dimensions[1]) + pointInArray[0]] = 1;
                }
            }
            delete[] pointInArray;
        }

        void showScreen(){
            for (int i = dimensions[0] - 1; i > -1; i--){
                for (int j = dimensions[1] - 1; j > -1; j--){
                    if (array[i * (dimensions[1]) + j] == 1){
                        cout << "█";
                    }
                    else{
                        cout << " ";
                    }
                }
                cout << endl;
            } 
        }

        void refreshScreen(){
            for (int i = 0; i < dimensions[0]; i++){
                for (int j = 0; j < dimensions[1]; j++){
                    array[i * (dimensions[1]) + j] = 0;
                }
            }
        }


    Screen(){
        dimensions = new int[2];
        #ifdef TIOCGSIZE
            struct ttysize ts;
            ioctl(STDIN_FILENO, TIOCGSIZE, &ts);
            dimensions[1] = ts.ts_cols;
            dimensions[0] = ts.ts_lines;
        #elif defined(TIOCGWINSZ)
            struct winsize ts;
            ioctl(STDIN_FILENO, TIOCGWINSZ, &ts);
            dimensions[1] = ts.ws_col;
            dimensions[0] = ts.ws_row;
        #endif /* TIOCGSIZE */
        //} end of finding terminal window size credit ProjectPhysX https://stackoverflow.com/questions/23369503/get-size-of-terminal-window-rows-columns

        // create an array of the size of the terminal
        array = new int[(dimensions[0]) * (dimensions[1])];
        for (int i = 0; i < dimensions[0]; i++){
            for (int j = 0; j < dimensions[1]; j++){
                array[i * (dimensions[1]) + j] = 0;
            }
        }
    }
    ~Screen(){
        delete[] dimensions;
        delete[] array;

    }
};


int main(){
    // create a Screen object
    Plane Plane1;
    Screen Screen1;
    for (float i = 0; i < 7; i = i + 0.5){
        double corner[8][3] = {{0, 0, 0},{20, 0, 0},{20, 10, 0},{0, 20, 0},{0, 0, 20},{20, 0, 20},{20, 10, 20},{0, 20, 20}};
        Plane1.set_angle(i);
        for (int j = 0; j < 8; j++){
            double* pointOnPlane = Plane1.findPointOnPlane(corner[j]);
            Screen1.togglePointOnScreen(pointOnPlane);
            }
        Screen1.showScreen();
        Screen1.refreshScreen();
        sleep(1);
    }
}