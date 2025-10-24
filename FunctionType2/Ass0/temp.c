#include<stdio.h>

float temp();

float temp(){
    float C = 37.0;
    float F;

    F = (C*9/5)+32;

    return F;
}

void main(){

    float result;
    result = temp();

    printf("Temparature is %0.2f", result);
}