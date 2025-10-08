#include<stdio.h>

void main(){
    int num;
    int rev , d1, d2, d3;

    printf("Enter the number:");
    scanf("%d", &num);
    
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