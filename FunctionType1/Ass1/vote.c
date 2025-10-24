#include<stdio.h>

void vote();

void vote(){
int age = 23;

    if(age>=18){

        printf("Eligible for vote");
    }else{

        printf("Not eligible for vote");
    }

 }

void main(){
    vote();
}