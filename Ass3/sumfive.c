#include<stdio.h>

void main(){
    int start = 1, end = 5;
    int sum = 0;

    while (start <= end){
        sum = sum + start;
        start++;
    }
    printf("%d\n", sum);
}