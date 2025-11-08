#include <stdio.h>

struct Time {
    int hour;
    int min;
    int sec;
};

struct Time storeTime();
struct Time addTime(struct Time, struct Time);
void display(struct Time);

void main() {
    struct Time t1, t2, t3;

  
    t1 = storeTime();
    t2 = storeTime();
    t3 = addTime(t1, t2);

    
    display(t1);
    display(t2);
    display(t3);
}


struct Time storeTime() {
    struct Time temp;

    printf("Enter Hours: ");
    scanf("%d", &temp.hour);

    printf("Enter Minutes: ");
    scanf("%d", &temp.min);

    printf("Enter Seconds: ");
    scanf("%d", &temp.sec);

    printf("-------------------------------------\n");

    return temp;
}

struct Time addTime(struct Time t1, struct Time t2) {
    struct Time t3;

    t3.sec = t1.sec + t2.sec;
    t3.min = t1.min + t2.min + (t3.sec / 60);
    t3.hour = t1.hour + t2.hour + (t3.min / 60);

    t3.sec = t3.sec % 60;
    t3.min = t3.min % 60;

    return t3;
}

void display(struct Time t) {

    printf("-------------------------------------\n");
    printf("%02d:%02d:%02d\n", t.hour, t.min, t.sec);
    
}
