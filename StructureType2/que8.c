#include <stdio.h>

struct Distance {
    float feet;
    float inch;
};

struct Distance storeDistance();
void display(struct Distance);

void main() {
    struct Distance d1, d2;

    d1 = storeDistance();
    d2 = storeDistance();

    display(d1);
    display(d2);
}


struct Distance storeDistance() {
    struct Distance temp;

    printf("Enter Feet: ");
    scanf("%f", &temp.feet);
    printf("Enter Inches: ");
    scanf("%f", &temp.inch);
    printf("-------------------------------------\n");

    return temp;
}

void display(struct Distance d) {
    printf("-------------------------------------\n");
    printf("Feet = %.2f\n", d.feet);
    printf("Inch = %.2f\n", d.inch);
}
