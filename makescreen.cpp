#include <sys/ioctl.h>
#include <iostream>
using namespace std;
#include <unistd.h>



int main (void)
{
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

    float** array;
    array = new float*[lines];
    for (int i = 0; i < lines; i++){
        array[i] = new float[cols];
    }

    for (int i = 0; i < lines; i++){
        for (int j = 0; j < cols; j++){
            cout << array[i][j];
        }
        cout << endl;
    }   







    for (int i = 0; i < lines; i++){
        delete[] array[i];
    }
    delete[] array;
}