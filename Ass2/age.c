#include <stdio.h>

void main() {
    int age = 13;

    if (age < 12) {
        printf("Child\n");
    }
    else if (age >= 12 && age <= 19) {
        printf("Teenager\n");
    }
    else if (age >= 20 && age <= 59) {
        printf("Adult\n");
    }
    else  {
        printf("Senior\n");
    }
    
}
