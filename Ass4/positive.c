#include<stdio.h>

void main(){
    int num;

    printf("Enter the number:");
    scanf("%d", &num);

    if(num > 0){

        printf("Number %d is Positive", num);

    }else if(num < 0){

        printf("Number is %d Negative", num);

    }else{

        printf("Number %d is zero", num);
        
    }
}