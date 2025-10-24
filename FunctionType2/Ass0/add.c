#include <stdio.h>

int add();

int add(){
int a=10;
int b=20;
int c;

c=a+b;

 return c;
}

void main() {
     int result;
     result = add();
     printf("Addition is : %d", result);
}