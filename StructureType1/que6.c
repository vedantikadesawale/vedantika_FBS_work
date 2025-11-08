#include<stdio.h>
#include<string.h>

struct Date{
    int date;
    char month[20];
    int year;
    
};

void main(){

    struct Date d1;

    d1.date = 28;
    strcpy(d1.month, "August");
    d1.year = 2002;
   
    printf("-------------------------------------\n");
    printf("Date information\n");
    printf("-------------------------------------\n");
    printf("Date = %d\n",d1.date);
    printf("Month = %s\n",d1.month);
    printf("Year = %d\n",d1.year);
    printf("-------------------------------------\n");


}