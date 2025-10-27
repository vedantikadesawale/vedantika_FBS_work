#include<stdio.h>

int swap(int *x, int *y);

int swap(int *x, int *y){
    
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

    printf("a is %d\n",*x);
    printf("b is %d",*y);

    // return 0;
}

void main(){
    int a = 3;
    int b = 4;
    swap(&a,&b);    
}