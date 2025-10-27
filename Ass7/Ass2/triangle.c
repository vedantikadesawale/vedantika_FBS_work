#include<stdio.h>

int triangle(int *x, int *y, int *z);

int triangle(int *x, int *y, int *z){

    if(*x == *y && *y == *z){
        printf("Triangle is Equilateral\n");
    }else if(*x == *y || *y == *z || *x == *z){
        printf("Triangle is Isosceles\n");
    }else{
        printf("Triangle is Scalene\n");
    }
}

void main(){
    int a, b, c;
    printf("Enter the sides:");
    scanf("%d %d %d",&a,&b,&c);

    triangle(&a, &b, &c);    
}