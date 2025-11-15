#include <stdio.h>

void salary(float x);

void salary(float x){

float da, ta, hra, total;

    // float basic = 6000.0;
    if (x <= 5000) {
        da  = 0.10 * x;   
        ta  = 0.20 * x;   
        hra = 0.25 * x;   
    } else {
        da  = 0.15 * x;   
        ta  = 0.25 * x;   
        hra = 0.30 * x;   
    }

    total = x + da + ta + hra;

    printf("Basic Salary: %.2f\n", x);
    printf("DA: %.2f\n", da);
    printf("TA: %.2f\n", ta);
    printf("HRA: %.2f\n", hra);
    printf("Total Salary: %.2f\n", total);

}

void main() {

    float basic;
    printf("Enter the basic:");
    scanf("%f", &basic);

    salary(basic);
}

