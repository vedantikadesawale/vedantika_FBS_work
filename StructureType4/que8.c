#include <stdio.h>

typedef struct Distance {
    float feet;
    float inch;
}Distance;

void storeDistance(Distance*);
void display(Distance*);

void main() {
    Distance d1, d2;

    storeDistance(&d1);
    storeDistance(&d2);

    display(&d1);
    display(&d2);
}


void storeDistance(Distance* temp) {
    
    printf("Enter Feet: ");
    scanf("%f", &temp->feet);
    printf("Enter Inches: ");
    scanf("%f", &temp->inch);
    printf("-------------------------------------\n");
}

void display(Distance* d) {
    printf("-------------------------------------\n");
    printf("Feet = %.2f\n", d->feet);
    printf("Inch = %.2f\n", d->inch);
}
