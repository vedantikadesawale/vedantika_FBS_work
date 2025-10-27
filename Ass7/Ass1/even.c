#include<stdio.h>

int evenOdd(int *x);


int evenOdd(int *x){

    if(*x % 2 == 0){
        printf("Number %d even",*x);
       
    }else{
        printf("Number %d is odd",*x);
    }
}

void main(){
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    evenOdd(&num);
}

