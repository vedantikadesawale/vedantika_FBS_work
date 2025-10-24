#include<stdio.h>

float temp(float x);

float temp(float x){
    
    float F;

    F = (x*9/5)+32;

    return F;
    
}

void main(){
    float C = 37.0;
    
    float res  = temp(C);
    printf("Temparature is %0.2f", res);
}