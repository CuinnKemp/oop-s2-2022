extern int* readNumbers() ;
extern void hexDigits(int*,int);
extern void printNumbers(int*,int);

int main(){
    int* numbers = readNumbers();

    hexDigits(numbers, 10);

    delete[] numbers;

    return 0;
}