#include<stdio.h>

int triangle(int x, int y, int z);

int triangle(int x, int y, int z){

    if(x == y && y == z){
        return 1;
    }else if(x == y || y == z || x == z){
        return 2;
    }else{
        return 3;
    }
}

void main(){
    int a, b, c;
    printf("Enter the sides:");
    scanf("%d %d %d",&a,&b,&c);

    int res = triangle(a,b,c);    
     if (res == 1)
        printf("Triangle is Equilateral\n");
    else if (res == 2)
        printf("Triangle is Isosceles\n");
    else 
        printf("Triangle is Scalene\n");
}