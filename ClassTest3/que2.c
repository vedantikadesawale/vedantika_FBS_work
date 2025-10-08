#include<stdio.h>

void main(){
    int start;
    int end;
    int i;
    int sum;

    printf("Enter the start: ");
    scanf("%d",&start);

    printf("Enter the end: ");
    scanf("%d",&end);


    for(i = start; i <= end; i+=2){
        sum = sum + i;
    }
    
    printf("Sum is %d", sum);
}