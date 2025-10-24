#include<stdio.h>

void palindrome();

void palindrome(){
int num = 732;
    int rev , d1, d2, d3;

    
        d1 = num / 100;
        d2 = (num /10)%10 ;
        d3 = num % 10;

        rev = d3*100 + d2*10 + d1;

        if(num == rev){
            printf("Palindrome");
        }else{
            printf("Not palindrome");
        }
    }

void main(){
    palindrome();
}