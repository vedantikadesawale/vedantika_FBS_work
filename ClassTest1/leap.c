#include <stdio.h>

void main() {
    int year = 2024;

    if (year % 400 == 0) {
        printf("Leap Year\n");
    }
    else if (year % 100 == 0) {
        printf("Not Leap Year\n");
    }
    else if (year % 4 == 0) {
        printf("Leap Year\n");
    }
    else {
        printf("Not a Leap Year\n");
    }

}
