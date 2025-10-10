#include <stdio.h>

void main() {
   int n = 7; 
    int i=2;  

    if (n <= 1) {
        printf("Not Prime\n");
        return;
    }

    while (i <= n/2) {
        if (n % i == 0) {
            printf("Not Prime\n");
             return;   
        }
        i++;
    }
    printf("Prime\n");

}

