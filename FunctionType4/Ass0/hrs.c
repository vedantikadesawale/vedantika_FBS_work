#include <stdio.h>

int hrs(int x);
int remaining(int x);

int hrs(int x){

    int hours, remaining;

    hours = x / 60;        

    return hours;
    
}

int remaining(int x){
    
    int hours, remaining;

    remaining = x % 60;  

    return remaining;
}

void main() {

    int minutes = 135;
    int result1 = hrs(minutes);
    int result2 = remaining(minutes);

    printf("%d hours and %d minutes\n", result1, result2);
}





