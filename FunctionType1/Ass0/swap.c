#include<stdio.h>

void swap();

void swap(){
    int a = 3;
    int b = 4;
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("a is %d\n",a);
    printf("b is %d",b);
}
void main(){
swap();    
}