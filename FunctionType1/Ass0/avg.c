#include<stdio.h>

void avg();
 
void avg(){
int a = 1, b = 2, c = 3, d = 4, e = 5;
    int avg;

    avg = (a+b+c+d+e)/5;

    printf("Average of the numbers %d",avg);
}

void main(){
     avg();
}