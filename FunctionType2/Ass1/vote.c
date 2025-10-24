#include<stdio.h>

int vote();

int vote(){
int age;

printf("Enter the age: ");
scanf("%d", &age);

    if(age>=18){
        return 1;
        // printf("Eligible for vote");
    }else{
        return 0;
        // printf("Not eligible for vote");
    }

 }

void main(){
    if(vote())
        printf("Eligible for vote");
    else
        printf("Not eligible for vote");
}