#include <stdio.h>

int upperCase();

int upperCase(){
// char ch = 'V';
char ch;
printf("Enter the character:");
scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z') {
        return 1;
        //  printf("The character is UPPERCASE.\n");
    } 
    else {
        return 0;
        // printf("The character is LOWERCASE.\n");
    }
}


void main() {
    // int res = upperCase();
    if(upperCase())
        printf("The character is UPPERCASE.\n");
    else
        printf("The character is LOWERCASE.\n");
}
