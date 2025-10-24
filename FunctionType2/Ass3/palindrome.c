#include <stdio.h>

int palindrome();

int palindrome(){
    int n;
    printf("Enter the number:");
    scanf("%d", &n);   
    int original = n, reversed = 0, rem;

    while (n > 0) {
        rem = n % 10;
        reversed = reversed * 10 + rem;
        n = n / 10;
    }

    if (reversed == original){
        return 1;
    }else{
        return 0;
    }
}

void main() {
    int res = palindrome();
     if (res == 1)
        printf("Palindrome\n");
    else
        printf("Not Palindrome");

}
