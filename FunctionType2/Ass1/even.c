#include<stdio.h>

int evenOdd();


int evenOdd(){
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    if(num%2 == 0){
        // printf("Number %d even",num);
        return 1;
    }else{
        // printf("Number %d is odd",num);
        return 0;
    }
}

void main(){
    int res = evenOdd();
    if(res  == 1){
        printf("Even Number");
    }else{
        printf("Odd Number");
    }
}

