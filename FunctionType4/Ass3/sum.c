#include<stdio.h>

int sum(int x, int y);

int sum(int x, int y){
    
    int sum = 0;

    while (x <= y){
        sum = sum + x;
        x++;
    }
    return sum;
}

void main(){

    int start, end;
    printf("Enter start:");
    scanf("%d",&start);

    printf("Enter end:");
    scanf("%d",&end);

    int res = sum(start,end);
    printf("Sum is:%d", res);
}