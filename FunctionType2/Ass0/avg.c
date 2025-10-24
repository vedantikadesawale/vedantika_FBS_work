#include<stdio.h>

int avg();
 
int avg(){
int a = 1, b = 2, c = 3, d = 4, e = 5;
    int avg;

    avg = (a+b+c+d+e)/5;

    return avg;
}

void main(){
    
    int result;
    result = avg();
    printf("Average of the numbers %d",result);

}