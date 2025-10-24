#include <stdio.h>

void prime();

void prime(){
    int n; 
    int i=2;  

    printf("Enter the number:");
    scanf("%d", &n);


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

void main() {
    prime();
}


