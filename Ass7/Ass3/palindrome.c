#include <stdio.h>

int palindrome(int *x);

int palindrome(int *x){
     
    int original = *x, reversed = 0, rem;

    while (*x > 0) {
        rem = *x % 10;
        reversed = reversed * 10 + rem;
        *x = *x / 10;
    }

    if (reversed == original){
         printf("Palindrome\n");
    }else{
        printf("Not Palindrome");
    }
}

void main() {

    int n;
    printf("Enter the number:");
    scanf("%d", &n); 

    palindrome(&n);
}
