#include <stdio.h>

int square(int x);
int cube(int x);

int square(int x){
    
    int square;
   
    square = x * x;   
        
    return square;
}

int cube(int x){

    int cube;

    cube   = x * x * x; 
    
    return cube;
}

void main() {
    int num = 2;
    int res1 = square(num);  
    int res2 = cube(num);

    printf("Square: %d\n", res1);
    printf("Cube: %d", res2);
}
