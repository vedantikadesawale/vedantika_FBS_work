#include<stdio.h>

void strong();

void strong(){
    int n = 150;
    int sum , fact, rem, i, j, num;
    
    for(i = 1; i <= n; i++){
        num = i;
        sum = 0;

    while(num > 0){
        rem = num % 10;
        fact = 1;
        j = 1;

        while(j <= rem){
            fact = fact * j;
            j++;
        }
        sum = sum + fact;
        num = num/10;
    }

    if(sum == i){
        printf("%d\n", i);
    }
    }
}

void main(){
    strong();
}