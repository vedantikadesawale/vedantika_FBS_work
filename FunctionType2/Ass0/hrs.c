#include <stdio.h>

int hrs();
int remaining();

void main() {

    int res1 = hrs();
    int res2 = remaining();
    printf("%d hours and %d minutes\n", res1, res2);
    
}

int hrs(){
    int minutes = 135;
    int hours, remaining;

    hours = minutes / 60;        

    return hours;
    
}

int remaining(){
    int minutes = 135;
    int hours, remaining;

    remaining = minutes % 60;  

    return remaining;
}




