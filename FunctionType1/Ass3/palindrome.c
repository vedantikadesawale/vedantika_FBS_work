#include <stdio.h>

void palindrome();

void palindrome(){
    int n = 121;   
    int original = n, reversed = 0, rem;

    while (n > 0) {
        rem = n % 10;
        reversed = reversed * 10 + rem;
        n = n / 10;
    }

    if (reversed == original){
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome");
    }
}

void main() {
    palindrome();
}
