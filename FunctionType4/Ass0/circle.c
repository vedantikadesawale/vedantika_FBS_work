#include<stdio.h>
 float area(float x, float y);

 float area(float x, float y ){

    float result;

    result = y*x*x;

    return result;

 }

void main(){
    float radius = 5.0;
    float pi = 3.14;
    float a = area(radius, pi);
    printf("Area of circle id %0.2f",a);
 
}