#include <stdio.h>

void firstLast(int x);

void firstLast(int x){
    
    int first, last, sum;

    last = x % 10;  

    while (x >= 10) {
        x = x / 10;  
    }
    
    first = x;

    sum = first + last;
    printf("Sum is %d", sum);
    
}

void main() {

    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    firstLast(n);
}

