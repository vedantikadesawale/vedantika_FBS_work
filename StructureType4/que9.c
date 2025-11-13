#include<stdio.h>


typedef struct Complex {
    int real;
    int imaginary;
}Complex;

void add(Complex*, Complex*, Complex*);
void display(Complex*);

void main() {
    Complex c1,c2,c3;

    c1.real = 10;
    c2.real = 20;

    c1.imaginary = 5;
    c2.imaginary = 6;

    add(&c1,&c2,&c3);

    display(&c1);
    display(&c2);
    display(&c3);

}

void add(Complex* c1, Complex* c2, Complex* c3){

    c3->real = c1->real + c2->real;
    c3->imaginary = c1->imaginary + c2->imaginary;
}

void display(Complex* cmp){

    printf("%d + %di\n",cmp->real,cmp->imaginary);
}