#include<stdio.h>

int palindrome();

int palindrome(){

    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    int rev , d1, d2, d3;

    
        d1 = num / 100;
        d2 = (num /10)%10 ;
        d3 = num % 10;

        rev = d3*100 + d2*10 + d1;

        if(num == rev){
            return 1;
            // printf("Palindrome");
        }else{
            return 0;
            // printf("Not palindrome");
        }
    }

void main(){

    if(palindrome()){
        printf("Palindrome");
    }else{
        printf("Not palindrome");
    }
}