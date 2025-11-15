#include<stdio.h>

void reverse(int x);

void reverse(int x){
    
    int rev = 0, d1;

    while(x != 0){
        d1 = x % 10;
        rev = rev*10 + d1;
        x = x/10;
    }
    printf("Reversed number: %d",rev);
}

void main(){

    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    reverse(num);

}
