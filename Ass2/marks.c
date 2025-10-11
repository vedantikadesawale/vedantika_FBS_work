#include<stdio.h>
void main(){
    int marks = 78;

    if(marks > 75){

        printf("Distinction");

    }else if(marks > 65 && marks < 76){

        printf("First Class");

    }else if(marks > 55 && marks < 66){

        printf("Second Class");

    }else if(marks > 40 && marks < 56 ){

        printf("Pass Class");

    } else {

         printf("Fail");
    }

}
