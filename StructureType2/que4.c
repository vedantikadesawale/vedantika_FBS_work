#include<stdio.h>
#include<string.h>

struct Hr{
    int id;
    char name[20];
    int salary;
    int commission;

};

struct Hr storeHr();
void display(struct Hr);

void main(){

    struct Hr h1, h2;

    h1 = storeHr();
    h2 = storeHr();

    display(h1);
    display(h2);
    
}

struct Hr storeHr(){

    struct Hr temp;

    printf("Enter HR information\n");
    printf("-------------------------------------\n");
    printf("Enter the HR Id: ");
    scanf("%d",&temp.id);
    printf("Enter the HR Name: ");
    scanf("%s",temp.name);
    printf("Enter the HR Salary: ");
    scanf("%d",&temp.salary);
    printf("Enter the HR Commission: ");
    scanf("%d",&temp.commission);
    printf("-------------------------------------\n");

    return temp;
}

void display(struct Hr h){
    printf("Admin information\n");
    printf("-------------------------------------\n");
    printf("ID : %d\n",h.id);
    printf("Name : %s\n",h.name);
    printf("Salary : %d\n",h.salary);
    printf("Commision : %d\n",h.commission);
    printf("-------------------------------------\n");
}