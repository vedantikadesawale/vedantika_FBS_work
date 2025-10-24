#include<stdio.h>

void evenOdd();


void evenOdd(){
    int num = 6;

    if(num%2 == 0){
        printf("Number %d even",num);
    }else{
        printf("Number %d is odd",num);
    }
}

void main(){
    evenOdd();
}

