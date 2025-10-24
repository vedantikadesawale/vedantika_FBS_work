#include <stdio.h>

int firstLast();

int firstLast(){
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int first, last, sum;

    last = n % 10;  

    while (n >= 10) {
        n = n / 10;  
    }
    
    first = n;

    sum = first + last;
    // printf("Sum is %d", sum);
    return sum;
}

void main() {
    int res = firstLast();
    printf("Sum is: %d",res);
}
