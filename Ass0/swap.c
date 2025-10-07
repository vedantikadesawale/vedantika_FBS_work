#include<stdio.h>

void main(){
    int a = 3;
    int b = 4;
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("a is %d\n",a);
    printf("b is %d",b);


}