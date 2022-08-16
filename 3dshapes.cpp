#include <cmath>


#include <sys/ioctl.h>
#include <iostream>
using namespace std;
#include <unistd.h>

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

    int screenangle = 0;

    


}