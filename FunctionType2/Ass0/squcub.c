#include <stdio.h>

int square();
int cube();

int square(){
    int num = 2;
    int square;

    square = num * num;      
    
    return square;

}

int cube(){
    int num = 2;
    int cube;
        
    cube   = num * num * num;    

    return cube;
   
}

void main() {
    int result1, result2;
    result1 = square();
    result2 = cube();

    printf("Square: %d\n", result1);
    printf("Cube: %d", result2);
    
}
