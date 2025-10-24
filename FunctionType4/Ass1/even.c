#include<stdio.h>

int evenOdd(int x);


int evenOdd(int x){

    if(x % 2 == 0){
        //printf("Number %d even",x);
       return 1;

    }else{
        //("Number %d is odd",x);
        return 0;
    }
}

void main(){
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    
    int res = evenOdd(num);

    if(res  == 1){
        printf("Even Number");
    }else{
        printf("Odd Number");
    }
}

