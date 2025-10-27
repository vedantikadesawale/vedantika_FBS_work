#include <stdio.h>

float student(float x, char a);

float student(float x, char a){

    float discount = 0.0, finalAmount;
    
    if (a == 'y' || a == 'Y') {
        
        if (x > 500) {
            discount = 0.20 * x;
        } else {
            discount = 0.10 * x;
        }

    } else { 

        if (x > 600) {
            discount = 0.15 * x;
        } else {
            discount = 0.0; 
        }
    }

    finalAmount = x - discount;

    printf("Discount: %.2f\n", discount);
    
    printf("Final Amount is: %.2f",finalAmount);

}
void main() {

    float price; 
    char stu;

    printf("Enter the price:");
    scanf("%f", &price);

    printf("Enter Y/y if he/she is student:");
    scanf(" %c", &stu);
   
    student(price,stu);

    
}

