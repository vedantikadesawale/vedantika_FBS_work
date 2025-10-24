#include<stdio.h>

int factorial();

int factorial(){
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    int i = 1;
    int fact = 1;

    while(i <= num){
        fact = fact * i;
        i++;
    }
    // printf("%d",fact);
    return fact;
}

void main(){
   int res = factorial();
   printf("Factorial is :%d",res);
}