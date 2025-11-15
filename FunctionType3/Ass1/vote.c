#include<stdio.h>

void vote(int x);

void vote(int x){


    if(x>=18){
        printf("Eligible for vote");
    }else{
        printf("Not eligible for vote");
    }

 }

void main(){

    int age;

    printf("Enter the age: ");
    scanf("%d", &age);

    vote(age);


}
