#include<stdio.h>

int vote(int x);

int vote(int x){


    if(x>=18){
        // printf("Eligible for vote");
        return 1;
    }else{
        // printf("Not eligible for vote");
        return 0;
    }

 }

void main(){

    int age;

    printf("Enter the age: ");
    scanf("%d", &age);

    int res = vote(age);
     if(res == 1)
        printf("Eligible for vote");
    else
        printf("Not eligible for vote");

}