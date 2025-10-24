#include <stdio.h>

int prime(int x);

int prime(int x){
   
    int i = 2;  

    if (x <= 1) {
        printf("Not Prime\n");
    }

    while (i <= x/2) {
        if (x % i == 0) {
            printf("Not Prime\n"); 
        }
        i++;
    }
    printf("Prime\n");
}

void main() {

    int n;
    printf("Enter the number:");
    scanf("%d", &n); 
    
    prime(n);
}

