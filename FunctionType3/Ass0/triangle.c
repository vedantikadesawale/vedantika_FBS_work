#include<stdio.h>

float triangle(float x, float y);
 
float triangle(float x, float y){
    
    float area;

    area = 0.5 * x * y;

    printf("Area of triangle is %0.2f", area);
}

void main(){
    float base = 2.0;
    float height = 6.0;
    
    triangle(base,height);

    

}
