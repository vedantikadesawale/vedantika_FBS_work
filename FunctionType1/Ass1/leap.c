#include<stdio.h>

void leap();

void leap(){
    int year = 2025;

    if(year%4 == 0){
        printf("Year is leap");
    }else{
        printf("Year is not leap");
    }
}


void main(){
    leap();
}