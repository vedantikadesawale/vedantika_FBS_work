#include<stdio.h>

int swap();

int swap(){
    int a = 3;
    int b = 4;
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("a is %d\n",a);
    printf("b is %d",b);

    return 0;
}

void main(){
swap();    
}