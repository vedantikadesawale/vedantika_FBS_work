#include<stdio.h>

void evenOdd();

void evenOdd(){
    int num;

    printf("Enter the number:");
    scanf("%d", &num);

    if(num%2 == 0){

        printf("Number %d even",num);

    }else{
        
        printf("Number %d is odd",num);
    }
}

void main(){
    evenOdd();
}