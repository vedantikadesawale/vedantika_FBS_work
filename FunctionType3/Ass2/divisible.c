#include <stdio.h>

void divisible(int x);

void divisible(int x){
    
    if (x % 3 == 0 && x % 5 == 0) {
       printf("Divisible by both\n");
        }
    else if (x % 3 == 0) {
        printf("Divisible by 3 but not by 5\n");
    }
    else if (x % 5 == 0) {
       printf("Divisible by 5 but not by 3\n");
    }
    else {
       printf("Divisible by None\n");
    }

}
void main() {
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    divisible(num);
        
}

