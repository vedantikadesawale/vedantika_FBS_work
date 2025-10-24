#include<stdio.h>

void vowel();

void vowel(){
char ch = 'i';

    if(ch == 'a' || ch =='e'  || ch =='i' || ch =='o' || ch =='u')
    {
        printf("Character is vowel");
    }else{
        printf("Character is consonant");
    }
}

void main(){
    vowel();
}