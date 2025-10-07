#include <stdio.h>

void main() {
    float price = 700, discount = 0.0, finalAmount;
    char student = 'y';   
    if (student == 'y' || student == 'Y') {
        if (price > 500) {
            discount = 0.20 * price;
        } else {
            discount = 0.10 * price;
        }
    } else { 
        if (price > 600) {
            discount = 0.15 * price;
        } else {
            discount = 0.0; 
        }
    }

    finalAmount = price - discount;

    printf("Discount: %.2f\n", discount);
    printf("Final amount: %.2f", finalAmount);

    
}
