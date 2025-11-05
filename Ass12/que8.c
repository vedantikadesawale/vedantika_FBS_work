#include <stdio.h>
#include<string.h>

void main() {
    char str[100];
    int i;
    int count =1;
    

    printf("Enter a string: ");
    gets(str); 

    for(i = 0; str[i] != '\0'; i++) {
       
        if(str[i] ==' ' && str[i+1]!=' ' && str[i+1]!= '\0')
        count ++;

    }
    printf("Number of words: %d",count);

}
