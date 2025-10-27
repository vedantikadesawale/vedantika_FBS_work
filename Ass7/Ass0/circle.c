#include<stdio.h>
 void area(float *x, float *y);

 void area(float *x, float *y ){

    float result;

    result = *y * *x * *x;

    printf("Area of circle id %0.2f",result);

 }

void main(){
    float radius = 5.0;
    float pi = 3.14;
    area(&radius, &pi);
 
}