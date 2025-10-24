#include<stdio.h>

float triangle(int x, int y);
 
float triangle(int x, int y){
    
    float area;

    area = 0.5 * x * y;

    return area;
}

void main(){
    float base = 2.0;
    float height = 6.0;
    
    float res = triangle(base,height);
    printf("Area of triangle is %0.2f", res);
}