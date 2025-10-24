#include <stdio.h>

int perfect(int x);

int perfect(int x){
   
    int i = 1, sum = 0;

    while (i < x) {
        if (x % i == 0) {
            sum = sum + i;
        }
        i++;
    }

    if (sum == x)
        return 1;
    else
        return 0;
}
void main() {

    int n;  //28
    printf("Enter the number:");
    scanf("%d", &n);
    
    int res  = perfect(n);
     if (res == 1)
        printf("Perfect\n");
    else
        printf("Not Perfect");
}



