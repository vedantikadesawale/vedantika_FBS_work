#include<stdio.h>

int strong();

int strong(){
    int n;  //145
    printf("Enter the number:");
    scanf("%d", &n);
    
    int sum = 0, fact, rem, i;
    int original = n;

    while(n>0){
        rem = n%10;
        fact = 1;
        i = 1;

        while(i <= rem){
            fact = fact * i;
            i++;
        }
        sum = sum + fact;
        n = n/10;
    }

    if(sum == original){
        return 1;
        // printf("Strong ");
    }else{
        return 0;
        // printf("No Strong");
    }
}
void main(){
   int res = strong();
   if (res == 1)
        printf("Strong\n");
    else
        printf("Not Strong");
}