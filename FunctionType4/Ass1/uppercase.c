#include <stdio.h>

int upperCase(char x);

int upperCase(char x){
// char ch = 'V';


    if (x >= 'A' && x <= 'Z') {
        //  printf("The character is UPPERCASE.\n");
        return 1;
    } 
    else {
        //  printf("The character is LOWERCASE.\n");
        return 0;
    }
}


void main() {
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);

    int res = upperCase(ch);
    if(res == 1)
        printf("The character is UPPERCASE.\n");
    else
        printf("The character is LOWERCASE.\n");
}
