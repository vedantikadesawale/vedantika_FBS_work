#include <stdio.h>

typedef struct Time {
    int hour;
    int min;
    int sec;
}Time;

void storeTime(Time*);
void addTime(Time*,Time*,Time*);
void display(Time*);

void main() {
    Time t1, t2, t3;

  
    storeTime(&t1);
    storeTime(&t2);
    addTime(&t1, &t2, &t3);

    
    display(&t1);
    display(&t2);
    display(&t3);
}


void storeTime(Time* temp) {
    
    printf("Enter Hours: ");
    scanf("%d", &temp->hour);

    printf("Enter Minutes: ");
    scanf("%d", &temp->min);

    printf("Enter Seconds: ");
    scanf("%d", &temp->sec);

    printf("-------------------------------------\n");

}

void addTime(Time* t1, Time* t2, Time* t3) {
    
    t3->sec = t1->sec + t2->sec;
    t3->min = t1->min + t2->min + (t3->sec / 60);
    t3->hour = t1->hour + t2->hour + (t3->min / 60);

    t3->sec = t3->sec % 60;
    t3->min = t3->min % 60;
}

void display(Time* t) {

    printf("-------------------------------------\n");
    printf("%02d:%02d:%02d\n", t->hour, t->min, t->sec);
    
}
