#include <stdio.h>

void armstrong();

void armstrong(){
    int n = 153;   
    int original, remainder, result = 0;

    original = n;

    while (n > 0) {
        remainder = n % 10;     
        result = result + (remainder * remainder * remainder); 
        n = n / 10;                    
    }

    if (result == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong");
}

void main() {
   armstrong();
}
