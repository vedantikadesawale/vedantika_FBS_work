#include<stdio.h>

int sum();

int sum(){
    int start, end;
    printf("Enter start:");
    scanf("%d",&start);

    printf("Enter end:");
    scanf("%d",&end);

    int sum = 0;

    while (start <= end){
        sum = sum + start;
        start++;
    }
    // printf("%d\n", sum);
    return sum;
}

void main(){
    int res = sum();
    printf("Sum is:%d", res);
}