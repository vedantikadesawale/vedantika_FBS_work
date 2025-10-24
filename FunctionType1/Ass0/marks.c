#include<stdio.h>

void marks();

void marks(){
    float Eng = 80.0;
    float Mar = 75.0;
    float Math = 90.0;
    float Sci = 85.0;
    float His = 70.0;

    float totalMarks, percentage;

    totalMarks = Eng + Mar + Math + Sci + His;

    percentage = (totalMarks / 500) * 100;

    printf("Total Marks are %0.2f\n", totalMarks);
    printf("Percentage %0.2f%%", percentage);
}
void main(){
    marks();
}