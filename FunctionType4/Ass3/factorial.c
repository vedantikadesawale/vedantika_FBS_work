#include<stdio.h>

int factorial(int x);

int factorial(int x){
    
    int i = 1;
    int fact = 1;

    while(i <= x){
        fact = fact * i;
        i++;
    }
    return fact;
}

void main(){

    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    int res = factorial(num);
    printf("Factorial is :%d",res);
}