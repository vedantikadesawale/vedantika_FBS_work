#include <stdio.h>

void main() {
    int hrs = 2, min = 30, sec = 15; 
    int total_seconds;
    int hr,minute;
     hr = (hrs * 3600);
     
     minute = (min * 60);

     total_seconds = hr + minute + sec;

    printf("Total seconds = %d\n", total_seconds);
   
}
