#include<stdio.h>
#include<string.h>

struct Distance {
    float feet;
    float inch;
};

void main() {

    struct Distance d1;

    d1.feet = 12.5;
    d1.inch = 8.75;

    printf("-------------------------------------\n");
    printf("Distance Information\n");
    printf("-------------------------------------\n");
    printf("Feet = %.2f\n", d1.feet);
    printf("Inch = %.2f\n", d1.inch);
    printf("-------------------------------------\n");
}
