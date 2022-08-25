extern int* create_integers(int, int);
extern void array_display(int*, int);

int main(){
    int num_vals = 5;
    int start = 2;
    
    int* integers = create_integers(num_vals, start);

    array_display(integers, num_vals);

    delete[] integers;
}