#include<stdio.h>

int greatest(int x, int y, int z);

int greatest(int x, int y, int z){
   
    if(x >= y && x >= z) {
         return 1;
    }
    else if(y >= x &&  y >= z){
        return 2;
    }
    else{
        return 3;
    }
}

void main(){

     int a, b , c;
    printf("Enter the value of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);

    int res = greatest(a, b, c);
     if (res == 1)
        printf("a is gratest\n");
    else if (res == 2)
        printf("b is gratest\n");
    else 
        printf("c is gratest\n");
}
