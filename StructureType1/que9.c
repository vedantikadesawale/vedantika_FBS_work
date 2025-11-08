#include<stdio.h>


struct Complex {
    float real;
    float imaginary;
};

void main() {

    struct Complex c1;

    c1.real = 12.5;
    c1.imaginary = 8.75;

    printf("-------------------------------------\n");
    printf("Complex Number Information\n");
    printf("-------------------------------------\n");
    printf("Real = %.2f\n", c1.real);
    printf("Imaginary = %.2f\n", c1.imaginary);
    printf("-------------------------------------\n");
}
