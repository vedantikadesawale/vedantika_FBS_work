#include <stdio.h>

void add(int x, int y);

void add(int x, int y){

int c;

c = x + y;

printf("Addition is : %d", c);

}

void main() {
     int a=10;
     int b=20;
     add(a,b);

}
