#include<stdio.h>
#include<string.h>

struct Hr{
    int id;
    char name[20];
    int salary;
    int commission;

};

void main(){

    struct Hr h1, h2;

    h1.id = 101;
    strcpy(h1.name, "Vedantika");
    h1.salary = 950000;
    h1.commission = 10000;


    printf("-------------------------------------\n");
    printf("HR 1 information\n");
    printf("-------------------------------------\n");
    printf("Id = %d\n",h1.id);
    printf("Name = %s\n",h1.name);
    printf("Salary = %d\n",h1.salary);
    printf("Allowance = %d\n",h1.commission);
    printf("-------------------------------------\n");

    printf("HR 2 information\n");
    printf("-------------------------------------\n");
    printf("Enter the HR 2 Id: ");
    scanf("%d",&h2.id);
    printf("Enter the HR 2 Name: ");
    scanf("%s",&h2.name);
    printf("Enter the HR 2 Salary: ");
    scanf("%d",&h2.salary);
    printf("Enter the HR 2 Commission: ");
    scanf("%d",&h2.commission);
    printf("-------------------------------------\n");

}