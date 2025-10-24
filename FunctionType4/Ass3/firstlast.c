#include <stdio.h>

int firstLast(int x);

int firstLast(int x){
    
    int first, last, sum;

    last = x % 10;  

    while (x >= 10) {
        x = x / 10;  
    }
    
    first = x;

    sum = first + last;
    return sum;
    
}

void main() {

    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int res = firstLast(n);
     printf("Sum is: %d",res);
}
