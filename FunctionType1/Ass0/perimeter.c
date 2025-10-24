#include<stdio.h>
 
void perimeter();

void perimeter(){
    int length = 2;
    int width = 4;
    int perimeter;

    perimeter = 2 * (length + width);

    printf("Perimeter of rectangle is %d", perimeter);
}

void main(){
    perimeter();

}