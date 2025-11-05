#include <stdio.h>
#include<string.h>

void main() {
    char str1[100];
    char str2[100];
    int i;
    int len1=0, len2=0;

    
    printf("Enter a string 1: ");
    scanf("%s", str1);   

    printf("Enter a string 2: ");
    scanf("%s", str2);   

    for(i = 0; str1[i] != '\0'; i++) {
        len1++;
    }

    for(i = 0; str1[i] != '\0'; i++) {
        len2++;
    }

    if(len1>len2){
        printf("String %s is greater",str1);
    }else{
        printf("String %s is greater",str2);
    }
}
