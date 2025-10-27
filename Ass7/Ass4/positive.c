#include<stdio.h>

int posNeg(int *x);

int posNeg(int *x){
    
    if(*x > 0){
        printf("Positive");
    }else if(*x < 0){
        printf("Negative");
    }else{
        printf("Zero");
    }
}

void main(){

    int num;

    printf("Enter the number:");
    scanf("%d", &num);

    posNeg(&num);
}