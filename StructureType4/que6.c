#include<stdio.h>
#include<string.h>

 typedef struct Date {
    int date;
    char month[20];
    int year;
}Date;

void storeDate(Date*);
void display(Date*);

void main() {
    Date d1, d2;

    storeDate(&d1);
    storeDate(&d2);

    display(&d1);
    display(&d2);
}

void storeDate(Date* temp) {
    printf("-------------------------------------\n");
    printf("Enter the date (day): ");
    scanf("%d", &temp->date);
    printf("Enter the month: ");
    scanf("%s", temp->month);
    printf("Enter the year: ");
    scanf("%d", &temp->year);
    printf("-------------------------------------\n");
}

void display(Date* d) {
    printf("Date Information\n");
    printf("-------------------------------------\n");
    printf("Date  : %d\n", d->date);
    printf("Month : %s\n", d->month);
    printf("Year  : %d\n", d->year);
    printf("-------------------------------------\n");
}
