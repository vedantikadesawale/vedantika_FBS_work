#include<stdio.h>
 
int perimeter();

int perimeter(){
    int length = 2;
    int width = 4;
    int perimeter;

    perimeter = 2 * (length + width);

    return perimeter;

}

void main(){

    int result;
    result = perimeter();

    printf("Perimeter of rectangle is %d", result);

}