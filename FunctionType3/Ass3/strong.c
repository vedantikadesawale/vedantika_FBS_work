#include<stdio.h>

int strong(int x);

int strong(int x){
   
    int sum = 0, fact, rem, i;
    int original = x;

    while(x>0){
        rem = x%10;
        fact = 1;
        i = 1;

        while(i <= rem){
            fact = fact * i;
            i++;
        }
        sum = sum + fact;
        x = x/10;
    }

    if(sum == original){
        printf("Strong ");
    }else{
       printf("Not Strong");
    }
}
void main(){

    int n;  //145
    printf("Enter the number:");
    scanf("%d", &n);
    
    strong(n);
  }