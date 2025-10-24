#include<stdio.h>

void vowel(char x);

void vowel(char x){

    if(x == 'a' || x =='e'  || x =='i' || x =='o' || x =='u')
    {
        printf("Character is vowel");
    }else{
        printf("Character is consonant");
    }
}

void main(){
   char ch;

    printf("Enter the character:");
    scanf("%c", &ch);

    vowel(ch);
}