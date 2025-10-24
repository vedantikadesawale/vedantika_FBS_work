#include<stdio.h>

void sum();

void sum(){
    int start = 1, end = 5;
    int sum = 0;

    while (start <= end){
        sum = sum + start;
        start++;
    }
    printf("%d\n", sum);
}

void main(){
    sum();
}