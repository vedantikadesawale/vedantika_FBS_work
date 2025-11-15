#include<stdio.h>

void factorial(int x);

void factorial(int x){
    
    int i = 1;
    int fact = 1;

    while(i <= x){
        fact = fact * i;
        i++;
    }
    printf("%d",fact);
}

void main(){

    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    factorial(num);

}
