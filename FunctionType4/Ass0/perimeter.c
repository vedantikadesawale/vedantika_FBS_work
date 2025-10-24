#include<stdio.h>
 
int perimeter(int x, int y);

int perimeter(int x, int y){

    int perimeter;

    perimeter = 2 * (x + y);

    return perimeter;    

}

void main(){

    int length = 2;
    int width = 4;
    
    int res = perimeter(length,width);
    printf("Perimeter of rectangle is %d", res);
}