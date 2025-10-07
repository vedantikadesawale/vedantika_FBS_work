#include <stdio.h>

void main() {
    int minutes = 135;
    int hours, remaining;


    hours = minutes / 60;        
    remaining = minutes % 60;    

    printf("%d hours and %d minutes\n", hours, remaining);

    
}


