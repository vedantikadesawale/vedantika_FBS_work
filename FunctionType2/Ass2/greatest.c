#include<stdio.h>

int greatest();

int greatest(){
    int a, b , c;
    printf("Enter the value of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);

    if(a >= b && a >= c) {
        return 1;
    }
    else if(b >= a &&  b >= c){
        return 2;
    }
    else{
        return 3;
    }
}

void main(){
    int res = greatest();

    if (res == 1)
        printf("a is gratest\n");
    else if (res == 2)
        printf("b is gratest\n");
    else 
        printf("c is gratest\n");
}
