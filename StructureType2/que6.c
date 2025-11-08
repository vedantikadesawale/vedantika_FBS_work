#include<stdio.h>
#include<string.h>

struct Date {
    int date;
    char month[20];
    int year;
};

struct Date storeDate();
void display(struct Date);

void main() {
    struct Date d1, d2;

    d1 = storeDate();
    d2 = storeDate();

    display(d1);
    display(d2);
}

struct Date storeDate() {
    struct Date temp;

    printf("-------------------------------------\n");
    printf("Enter the date (day): ");
    scanf("%d", &temp.date);
    printf("Enter the month: ");
    scanf("%s", temp.month);
    printf("Enter the year: ");
    scanf("%d", &temp.year);
    printf("-------------------------------------\n");

    return temp; 
}

void display(struct Date d) {
    printf("Date Information\n");
    printf("-------------------------------------\n");
    printf("Date  : %d\n", d.date);
    printf("Month : %s\n", d.month);
    printf("Year  : %d\n", d.year);
    printf("-------------------------------------\n");
}
