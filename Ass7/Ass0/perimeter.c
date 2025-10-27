#include<stdio.h>
 
int perimeter(int *x, int *y);

int perimeter(int *x, int *y){

    int perimeter;

    perimeter = 2 * (*x + *y);

    printf("Perimeter of rectangle is %d", perimeter);

}

void main(){

    int length = 2;
    int width = 4;
    perimeter(&length, &width);

    

}