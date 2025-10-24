#include <stdio.h>

int palindrome(int x);

int palindrome(int x){
     
    int original = x, reversed = 0, rem;

    while (x > 0) {
        rem = x % 10;
        reversed = reversed * 10 + rem;
        x = x / 10;
    }

    if (reversed == original){
        return 1;
    }else{
        return 0;
    }
}

void main() {

    int n;
    printf("Enter the number:");
    scanf("%d", &n); 

    int res  = palindrome(n);
    if (res == 1)
        printf("Palindrome\n");
    else
        printf("Not Palindrome");
}
