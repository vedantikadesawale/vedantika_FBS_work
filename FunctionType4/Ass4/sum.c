#include<stdio.h>

int sum(int x);

int sum(int x){ 
    
    int rem;
    int sum =0;

    while(x!=0){
        rem = x % 10;
        sum = sum + rem;
        x = x / 10;
    }

    return sum;
}

void main(){

    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    int res = sum(num);
     printf("Sum is:%d",res);
}