#include<stdio.h>

void main(){
    int num = 5;
    int i = 1;
    int fact = 1;

    while(i <= num){
        fact = fact * i;
        i++;
    }
    printf("%d",fact);
}