#include<stdio.h>

void triangle();
 
void triangle(){
    int base = 2;
    int height = 6;
    int area;

    area = 0.5 * base * height;

    printf("Area of triangle is %d", area);
}
void main(){
    triangle();
}