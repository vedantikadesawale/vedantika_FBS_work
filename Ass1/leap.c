#include<stdio.h>

void main(){
    int year = 2024;

    if(year%4 == 0 && year%100! = 0){
        printf("Year is leap");
    }else{
        printf("Year is not leap");
    }
}