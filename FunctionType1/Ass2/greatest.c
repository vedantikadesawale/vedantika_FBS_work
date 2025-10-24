#include<stdio.h>

void greatest();

void greatest(){int a = 3, b = 5, c = 9;

    if(a >= b && a >= c) {

        printf("%d is gratest", a);

    }
    else if(b >= a &&  b >= c){

        printf("%d is greatest", b);

    }
    else{

        printf("%d is greatest", c);

        }
    }
void main(){
    greatest();
    
}
