#include<stdio.h>

void main(){
    int num;
    int rem;
    int sum =0;

    printf("Enter the number:");
    scanf("%d", &num);

    while(num!=0){
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    printf("Sum : %d", sum);


}