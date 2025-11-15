#include<stdio.h>

void temp(float x);

void temp(float x){
    
    float F;

    F = (x*9/5)+32;

    printf("Temparature is %0.2f", F);
}

void main(){
    float C = 37.0;
    temp(C);

}
