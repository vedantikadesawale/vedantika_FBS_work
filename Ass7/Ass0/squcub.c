#include <stdio.h>

int square(int *x);
int cube(int *x);

int squCube(int *x){
    
    int square;
    int cube;

    square = *x * *x;   
    cube   = *x * *x * *x;       
    
    printf("Square: %d\n", square);
    printf("Cube: %d", cube);

}

void main() {
    int num = 2;
    squCube(&num);  
}
