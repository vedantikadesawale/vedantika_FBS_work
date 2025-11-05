#include <stdio.h>

void main() {
    char str[100];
    char str1[100];
    int i,j;


    printf("Enter a string: ");
    scanf("%s", str);    

    for(i = 0; str[i] != '\0'; i++) {
        if(i % 2 ==0){
        str1[j] = str[i];
        j++;
        }
    }

    str1[j] = '\0'; //terminate string

    printf("String is:%s\n",str1);
    
}
