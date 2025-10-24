#include<stdio.h>

int palindrome(int y);

int palindrome(int y){
    
    int rev , d1, d2, d3;

        d1 = y / 100;
        d2 = (y /10)%10 ;
        d3 = y % 10;

        rev = d3*100 + d2*10 + d1;

        if(y == rev){
            // printf("Palindrome");
            return 1;
        }else{
            // printf("Not palindrome");
            return 0;
        }
    }

void main(){

    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    
    int res = palindrome(num);
     if(res == 1){
        printf("Palindrome");
    }else{
        printf("Not palindrome");
    }

}