#include<stdio.h>

void main(){
    int start;
    int end;
    int i;

    printf("Enter the start: ");
    scanf("%d",&start);

    printf("Enter the end: ");
    scanf("%d",&end);

    printf("Even numbers: ");
    for(i = start; i<=end; i++){
        if(i%2==0){
            printf("%d ",i);
            i++;
        }
    }

     printf("\nOdd numbers: ");
    for(i = start; i<=end; i++){
        if(i%2!=0){
            printf("%d ",i);
            i++;
        }
    }
}