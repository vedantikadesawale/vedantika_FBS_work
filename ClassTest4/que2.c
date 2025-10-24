#include <stdio.h>
#include <math.h>   

void main() {
    double base, exp, result;

    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%lf", &exp);

    result = pow(base, exp);  

    printf("%.0lf ^ %.0lf = %.0lf\n", base, exp, result);
}
