#include <stdio.h>

int divisible();

int divisible(){
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    
    if (num % 3 == 0 && num % 5 == 0) {
        return 1;
        }
    else if (num % 3 == 0) {
        return 2;
    }
    else if (num % 5 == 0) {
        return 3;
    }
    else {
        return 4;
    }

}
void main() {
    int res = divisible();

    if (res == 1)
        printf("Divisible by both\n");
    else if (res == 2)
        printf("Divisible by 3 but not by 5\n");
    else if (res == 3)
        printf("Divisible by 5 but not by 3\n");
    else
        printf("Divisible by None\n");
}
