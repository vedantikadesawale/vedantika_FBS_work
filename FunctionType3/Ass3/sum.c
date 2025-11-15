#include<stdio.h>

void sum(int x, int y);

void sum(int x, int y){
    
    int sum = 0;

    while (x <= y){
        sum = sum + x;
        x++;
    }
    printf("%d\n", sum);
}

void main(){

    int start, end;
    printf("Enter start:");
    scanf("%d",&start);

    printf("Enter end:");
    scanf("%d",&end);

    sum(start,end);

}
