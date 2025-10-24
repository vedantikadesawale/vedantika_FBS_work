#include <stdio.h>

void square();
void cube();

void square(){
    int num = 2;
    int square;

    square = num * num;          

    printf("Square: %d\n", square);
}

void cube(){
    int num = 2;
    int cube;
        
    cube   = num * num * num;    

    printf("Cube: %d", cube);
}
void main() {
    square();
    cube();
    
}
