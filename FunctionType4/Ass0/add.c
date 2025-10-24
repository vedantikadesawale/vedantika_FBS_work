#include <stdio.h>

int add(int x, int y);

int add(int x, int y){

int c;

c = x + y;

return c;

}

void main() {
     int a=10;
     int b=20;
     int result = add(a,b);
     printf("Addition is : %d", result);
}