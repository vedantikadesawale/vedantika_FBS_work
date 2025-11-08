#include<stdio.h>


struct Complex {
    int real;
    int imaginary;
};

struct Complex add(struct Complex, struct Complex);
void display(struct Complex);

void main() {
    struct Complex c1,c2,c3;

    c1.real = 10;
    c2.real = 20;

    c1.imaginary = 5;
    c2.imaginary = 6;

    c3 = add(c1,c2);

    display(c1);
    display(c2);
    display(c3);

}

struct Complex add(struct Complex c1, struct Complex c2){

    struct Complex c3;

    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;

    return c3;
}

void display(struct Complex cmp){

    printf("%d + %di\n",cmp.real,cmp.imaginary);
}