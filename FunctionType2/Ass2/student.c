#include <stdio.h>

float student();

float student(){
    float price, discount = 0.0, finalAmount;
    char student;   

    printf("Enter the price:");
    scanf("%f", &price);

    printf("Enter Y/y if he/she is student:");
    scanf(" %c", &student);


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
    
    return finalAmount;

}
void main() {
   
float res = student();
printf("Final Amount is: %.2f",res);
    
}
