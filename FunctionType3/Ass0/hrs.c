#include <stdio.h>

void hrs(int x);


void hrs(int x){
   
    int hours, remaining;

    hours = x / 60;   
    remaining = x % 60;      

    printf("%d hours and %d minutes\n", hours, remaining);
    
}
void main() {
    int minutes = 135;
    hrs(minutes);
}






