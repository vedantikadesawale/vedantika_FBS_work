#include <stdio.h>

int age(int *x);

int age(int *x){

    if (*x < 12) {
        printf("Child\n");
    }
    else if (*x >= 12 && *x <= 19) {
        printf("Teenager\n");
    }
    else if (*x >= 20 && *x <= 59) {
        printf("Adult\n");
    }
    else  {
       printf("Senior\n");
    }
}
void main() {
    int num;
    printf("Enter the age:");
    scanf("%d", &num);

    age(&num);

}
