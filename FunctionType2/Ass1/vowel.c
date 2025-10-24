#include<stdio.h>

int vowel();

int vowel(){
char ch;

printf("Enter the character:");
scanf("%c", &ch);

    if(ch == 'a' || ch =='e'  || ch =='i' || ch =='o' || ch =='u')
    {
        return 1;
        // printf("Character is vowel");
    }else{
        return 0;
        // printf("Character is consonant");
    }
}

void main(){
    if(vowel())
        printf("Character is vowel");
    else
        printf("Character is consonant");
}