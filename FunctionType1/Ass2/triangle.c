#include<stdio.h>

void triangle();

void triangle(){

    int a = 2, b = 2, c = 1;

    if(a == b && b == c){

        printf("Triangle is Equilateral");

    }else if(a == b || b == c || a == c){

        printf("Triangle is Isosceles");
        
    }else{

        printf("Triangle is Scalene");
    }
}
void main(){
    triangle();
}