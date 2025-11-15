#include<stdio.h>

void leap(int x);

void leap(int x){
    

    if(x % 4 == 0){
        printf("Year is leap");
    }else{
        printf("Year is not leap");
    }
}


void main(){
    int year;
    printf("Enter the year:");
    scanf("%d", &year);
    
    leap(year);

}
