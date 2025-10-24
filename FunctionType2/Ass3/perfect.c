#include <stdio.h>

int perfect();

int perfect(){
    int n;  //28
    printf("Enter the number:");
    scanf("%d", &n);
    
    int i = 1, sum = 0;

    while (i < n) {
        if (n % i == 0) {
            sum = sum + i;
        }
        i++;
    }

    if (sum == n)
        return 1;
        // printf("Perfect\n");
    else
         return 0;
        // printf("Not Perfect");
}
void main() {
  int res =  perfect();

    if (res == 1)
        printf("Perfect\n");
    else
        printf("Not Perfect");
}



