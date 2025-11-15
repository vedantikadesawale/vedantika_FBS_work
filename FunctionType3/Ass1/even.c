#include<stdio.h>

void evenOdd(int x);


void evenOdd(int x){

    if(x % 2 == 0){
        printf("Number %d even",x);
       
    }else{
        printf("Number %d is odd",x);
    }
}

void main(){
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    evenOdd(num);
}


