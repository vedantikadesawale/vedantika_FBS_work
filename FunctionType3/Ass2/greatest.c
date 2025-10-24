#include<stdio.h>

int greatest(int x, int y, int z);

int greatest(int x, int y, int z){
   
    if(x >= y && x >= z) {
         printf("a is gratest\n");
    }
    else if(y >= x &&  y >= z){
        printf("b is gratest\n");
    }
    else{
         printf("c is gratest\n");
    }
}

void main(){

     int a, b , c;
    printf("Enter the value of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);

    greatest(a, b, c);
}
