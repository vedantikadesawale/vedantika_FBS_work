#include<stdio.h>

int leap(int *x);

int leap(int *x){
    

    if(*x % 4 == 0){
        printf("Year is leap");
    }else{
        printf("Year is not leap");
    }
}


void main(){
    int year;
    printf("Enter the year:");
    scanf("%d", &year);
    
    leap(&year);
}