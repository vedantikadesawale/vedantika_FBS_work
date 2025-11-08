#include<stdio.h>
#include<string.h>

struct Employee{
    int id;
    char name[20];
    int salary;
};

struct Employee storeEmployee();
void display(struct Employee);

void main(){

    struct Employee e1, e2;

    e1 = storeEmployee();
    e2 = storeEmployee();

    display(e1);
    display(e2);

}

struct Employee storeEmployee(){

    struct Employee temp;

    printf("Enter Employee information\n");
    printf("-------------------------------------\n");
    printf("Enter the Employee Id: ");
    scanf("%d",&temp.id);
    printf("Enter the Employee Name: ");
    scanf("%s",temp.name);
    printf("Enter the Employee Salary: ");
    scanf("%d",&temp.salary);
    printf("-------------------------------------\n");

    return temp;
}

void display(struct Employee emp){
    printf("Employee information\n");
    printf("-------------------------------------\n");
    printf("ID : %d\n",emp.id);
    printf("Name : %s\n",emp.name);
    printf("Salary : %d\n",emp.salary);
    printf("-------------------------------------\n");
}