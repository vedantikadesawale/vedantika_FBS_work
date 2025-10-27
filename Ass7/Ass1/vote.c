#include<stdio.h>

int vote(int *x);

int vote(int *x){


    if(*x>=18){
        printf("Eligible for vote");
    }else{
        printf("Not eligible for vote");
    }

 }

void main(){

    int age;

    printf("Enter the age: ");
    scanf("%d", &age);

    vote(&age);

}