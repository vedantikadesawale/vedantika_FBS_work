#include <stdio.h>

void salary();

void salary(){
float da, ta, hra, total;

    float basic = 6000.0;

    if (basic <= 5000) {
        da  = 0.10 * basic;   
        ta  = 0.20 * basic;   
        hra = 0.25 * basic;   
    } else {
        da  = 0.15 * basic;   
        ta  = 0.25 * basic;   
        hra = 0.30 * basic;   
    }

    total = basic + da + ta + hra;

    printf("Basic Salary: %.2f\n", basic);
    printf("DA: %.2f\n", da);
    printf("TA: %.2f\n", ta);
    printf("HRA: %.2f\n", hra);
    printf("Total Salary: %.2f\n", total);
}

void main() {
    salary();
}
