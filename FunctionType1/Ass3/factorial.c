#include<stdio.h>

void factorial();

void factorial(){
    int num = 5;
    int i = 1;
    int fact = 1;

    while(i <= num){
        fact = fact * i;
        i++;
    }
    printf("%d",fact);
}

void main(){
   factorial();
}