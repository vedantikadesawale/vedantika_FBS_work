#include <stdio.h>

void upperCase(char x);

void upperCase(char x){
// char ch = 'V';


    if (x >= 'A' && x <= 'Z') {
         printf("The character is UPPERCASE.\n");
    } 
    else {
         printf("The character is LOWERCASE.\n");
    }
}


void main() {
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);

    upperCase(ch);
}
