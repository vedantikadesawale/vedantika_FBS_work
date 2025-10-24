#include <stdio.h>

void upperCase();

void upperCase(){
char ch = 'V';

    if (ch >= 'A' && ch <= 'Z') {
         printf("The character is UPPERCASE.\n");
    } 
    else {
        printf("The character is LOWERCASE.\n");
    }
}


void main() {
    upperCase();
}
