#include<stdio.h>

int leap();

int leap(){
    int year;
    printf("Enter the year:");
    scanf("%d", &year);

    if(year%4 == 0){
        return 1;
        // printf("Year is leap");
    }else{
        return 0;
        // printf("Year is not leap");
    }
}


void main(){
    if(leap()){
        printf("Year is leap");
    }else{
        printf("Year is not leap");
    }
}