#include<stdio.h>

int triangle();

int triangle(){

    int a, b, c;

    printf("Enter the sides:");
    scanf("%d %d %d",&a,&b,&c);
    

    if(a == b && b == c){
        return 1;
    }else if(a == b || b == c || a == c){
        return 2;
    }else{
        return 3;
    }
}
void main(){
   int res = triangle();

    if (res == 1)
        printf("Triangle is Equilateral\n");
    else if (res == 2)
        printf("Triangle is Isosceles\n");
    else 
        printf("Triangle is Scalene\n");
}