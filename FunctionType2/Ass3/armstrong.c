#include <stdio.h>

int armstrong();

int armstrong(){
    int n;   
    printf("Enter the number:");
    scanf("%d", &n);
    int original, remainder, result = 0;

    original = n;

    while (n > 0) {
        remainder = n % 10;     
        result = result + (remainder * remainder * remainder); 
        n = n / 10;                    
    }

    if (result == original)
        return 1;
    else
        return 0;
}

void main() {
   int res = armstrong();
    if (res == 1)
        printf("Armstrong\n");
    else
        printf("Not Armstrong");
}
