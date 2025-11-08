#include<stdio.h>
#include<string.h>

struct Employee{
    int id;
    char name[20];
    int salary;
};

void main(){

    struct Employee e1, e2, e3;

    e1.id = 101;
    strcpy(e1.name, "Vedantika");
    e1.salary = 95;

    printf("-------------------------------------\n");
    printf("Employee 1 information\n");
    printf("-------------------------------------\n");
    printf("Id = %d\n",e1.id);
    printf("Name = %s\n",e1.name);
    printf("Salary = %d\n",e1.salary);
    printf("-------------------------------------\n");

    printf("Employee 2 information\n");
    printf("-------------------------------------\n");
    printf("Enter the Employee 2 Id: ");
    scanf("%d",&e2.id);
    printf("Enter the Employee 2 Name: ");
    scanf("%s",&e2.name);
    printf("Enter the Employee 2 Salary: ");
    scanf("%d",&e2.salary);
    printf("-------------------------------------\n");

    printf("Employee 3 information\n");
    printf("-------------------------------------\n");
    printf("Enter the Employee 3 RollNo: ");
    scanf("%d",&e3.id);
    printf("Enter the Employee 3 Name: ");
    scanf("%s",&e3.name);
    printf("Enter the Employee 3 Salary: ");
    scanf("%d",&e3.salary);
    printf("-------------------------------------\n");

}