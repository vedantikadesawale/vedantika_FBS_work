#include<stdio.h>

float triangle();
 
float triangle(){
    float base = 2.0;
    float height = 6.0;
    float area;

    area = 0.5 * base * height;

    return area;
}

void main(){
    float result;
    result = triangle();

    printf("Area of triangle is %0.2f", result);
}