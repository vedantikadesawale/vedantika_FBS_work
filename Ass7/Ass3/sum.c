#include<stdio.h>

int sum(int *x, int *y);

int sum(int *x, int *y){
    
    int sum = 0;
    int start = *x;

    while (start <= *y){
        sum = sum + start;
        start++;
    }
    printf("%d\n", sum);
}

void main(){

    int start, end;
    printf("Enter start:");
    scanf("%d",&start);

    printf("Enter end:");
    scanf("%d",&end);

    sum(&start, &end);
}