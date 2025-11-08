#include<stdio.h>
#include<string.h>

struct Admin{
    int id;
    char name[20];
    int salary;
    int allowance;

};

void main(){

    struct Admin a1, a2;

    a1.id = 101;
    strcpy(a1.name, "Vedantika");
    a1.salary = 95;
    a1.allowance = 10;


    printf("-------------------------------------\n");
    printf("Admin 1 information\n");
    printf("-------------------------------------\n");
    printf("Id = %d\n",a1.id);
    printf("Name = %s\n",a1.name);
    printf("Salary = %d\n",a1.salary);
    printf("Allowance = %d\n",a1.allowance);
    printf("-------------------------------------\n");

    printf("Admin 2 information\n");
    printf("-------------------------------------\n");
    printf("Enter the Admin 2 Id: ");
    scanf("%d",&a2.id);
    printf("Enter the Admin 2 Name: ");
    scanf("%s",&a2.name);
    printf("Enter the Admin 2 Salary: ");
    scanf("%d",&a2.salary);
    printf("Enter the Admin 2 Allowance: ");
    scanf("%d",&a2.allowance);
    printf("-------------------------------------\n");

}