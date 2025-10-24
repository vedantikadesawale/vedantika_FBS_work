#include <stdio.h>

int prime();

int prime(){
    int n;
    printf("Enter the number:");
    scanf("%d", &n); 
    int i = 2;  

    if (n <= 1) {
        // printf("Not Prime\n");
        return 0;
    }

    while (i <= n/2) {
        if (n % i == 0) {
            // printf("Not Prime\n");
             return 0;   
        }
        i++;
    }
    // printf("Prime\n");
    return 1;
}

void main() {
    int res = prime();
    if(res == 1)
        printf("Prime Number");
    else    
        printf("Not Prime Number");
}

