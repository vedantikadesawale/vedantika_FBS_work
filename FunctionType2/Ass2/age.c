#include <stdio.h>

char age();

char age(){
    int age;
    printf("Enter the age:");
    scanf("%d", &age);

    if (age < 12) {
        return 1;
    }
    else if (age >= 12 && age <= 19) {
        return 2;
    }
    else if (age >= 20 && age <= 59) {
        return 3;
    }
    else  {
        return 4;
    }
}
void main() {
   int res = age();

    if (res == 1)
        printf("Child\n");
    else if (res == 2)
        printf("Teenager\n");
    else if (res == 3)
        printf("Adult\n");
    else
        printf("Senior\n");

}
