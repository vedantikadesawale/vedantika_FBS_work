#include<stdio.h>

int greatest(int *x, int *y, int *z);

int greatest(int *x, int *y, int *z){
   
    if(*x >= *y && *x >= *z) {
         printf("a is greatest\n");
    }
    else if(*y >= *x &&  *y >= *z){
        printf("b is greatest\n");
    }
    else{
         printf("c is greatest\n");
    }
}

void main(){

     int a, b , c;
    printf("Enter the value of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);

    greatest(&a, &b, &c);
}
