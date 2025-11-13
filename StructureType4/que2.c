#include<stdio.h>
#include<string.h>

typedef struct Employee{
    int id;
    char name[20];
    int salary;
}Employee;

void storeEmployee(Employee*);
void display(Employee*);

void main(){

    Employee e1, e2;

    storeEmployee(&e1);
    storeEmployee(&e2);

    display(&e1);
    display(&e2);

}

void storeEmployee(Employee* temp){


    printf("Enter Employee information\n");
    printf("-------------------------------------\n");
    printf("Enter the Employee Id: ");
    scanf("%d",&temp->id);
    printf("Enter the Employee Name: ");
    scanf("%s",temp->name);
    printf("Enter the Employee Salary: ");
    scanf("%d",&temp->salary);
    printf("-------------------------------------\n");

}

void display(Employee* emp){
    printf("Employee information\n");
    printf("-------------------------------------\n");
    printf("ID : %d\n",emp->id);
    printf("Name : %s\n",emp->name);
    printf("Salary : %d\n",emp->salary);
    printf("-------------------------------------\n");
}