#include<stdio.h>


struct Time{
    float hour;
    float min;
    float sec;
    
};

void main(){

    struct Time t1;

    t1.hour = 4;
    t1.min = 23.30;
    t1.sec = 20.01;
   
    printf("-------------------------------------\n");
    printf("Time information\n");
    printf("-------------------------------------\n");
    printf("Hour = %.2f\n",t1.hour);
    printf("Min = %.2f\n",t1.min);
    printf("Sec = %.2f\n",t1.sec);
    printf("-------------------------------------\n");


}