#include<stdio.h>

void table();

void table(){
    int i = 1;
    int num;
    int n = 5;

    while (i<=10){
        num = n * i;
        printf("%d\n", num);
        i++;
    }
}

void main(){
   table();
}