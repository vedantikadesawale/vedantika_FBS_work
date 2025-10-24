#include <stdio.h>

int prime(int x);

int prime(int x){
   
    int i = 2;  

    if (x <= 1) {
        return 0;
    }

    while (i <= x/2) {
        if (x % i == 0) {
            return 0; 
        }
        i++;
    }
    return 1;
}

void main() {

    int n;
    printf("Enter the number:");
    scanf("%d", &n); 
    
    int res = prime(n);
     if(res == 1)
        printf("Prime Number");
    else    
        printf("Not Prime Number");
}

