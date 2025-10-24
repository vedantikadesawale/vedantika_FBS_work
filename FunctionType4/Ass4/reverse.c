#include<stdio.h>

int reverse(int x);

int reverse(int x){
    
    int rev = 0, d1;

    while(x != 0){
        d1 = x % 10;
        rev = rev*10 + d1;
        x = x/10;
    }
    return rev;
}

void main(){

    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    int res = reverse(num);
    printf("Reverse number is:%d",res);
}