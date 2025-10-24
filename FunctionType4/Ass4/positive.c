#include<stdio.h>

int posNeg(int x);

int posNeg(int x){
    
    if(x > 0){
        return 1;
    }else if(x < 0){
        return 2;
    }else{
        return 3;
    }
}

void main(){

    int num;

    printf("Enter the number:");
    scanf("%d", &num);

    int res = posNeg(num);
     if(res == 1){
        printf("Positive");
    }else if(res == 2){
        printf("Negative");
    }else{
        printf("Zero");
    }
}