#include <stdio.h>

int armstrong(int x);

int armstrong(int x){
    
    int original, remainder, result = 0;

    original = x;

    while (x > 0) {
        remainder = x % 10;     
        result = result + (remainder * remainder * remainder); 
        x = x / 10;                    
    }

    if (result == original)
        return 1;
    else
        return 0;
}

void main() {

    int n;   
    printf("Enter the number:");
    scanf("%d", &n);

    int res = armstrong(n);
    if (res == 1)
        printf("Armstrong\n");
    else
        printf("Not Armstrong");
}
