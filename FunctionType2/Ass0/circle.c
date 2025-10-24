#include<stdio.h>
 float area();

 float area(){

    float radius = 5.0;
    float pi = 3.14;
    float area;

    area = pi*radius*radius;

    return area;

 }

void main(){

    float result;
    result = area();

    printf("Area of circle id %0.2f",result);
}