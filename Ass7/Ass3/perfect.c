#include <stdio.h>

int perfect(int *x);

int perfect(int *x){
   
    int i = 1, sum = 0;

    while (i < *x) {
        if (*x % i == 0) {
            sum = sum + i;
        }
        i++;
    }

    if (sum == *x)
        printf("Perfect\n");
    else
        printf("Not Perfect");
}
void main() {

    int n;  //28
    printf("Enter the number:");
    scanf("%d", &n);
    
    perfect(&n);
}



