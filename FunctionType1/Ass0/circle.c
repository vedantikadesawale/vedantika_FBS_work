#include<stdio.h>
 void area();

 void area(){
 float radius = 5.0;
    float pi = 3.14;
    float area;

    area = pi*radius*radius;

    printf("Area of circle id %0.2f",area);

 }
void main(){
    area();
}