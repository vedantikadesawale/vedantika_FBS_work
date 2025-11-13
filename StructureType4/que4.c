#include<stdio.h>
#include<string.h>

typedef struct Hr{
    int id;
    char name[20];
    int salary;
    int commission;

}Hr;

void storeHr(Hr*);
void display(Hr*);

void main(){

    Hr h1, h2;

    storeHr(&h1);
    storeHr(&h2);

    display(&h1);
    display(&h2);
    
}

void storeHr(Hr* temp){

    printf("Enter HR information\n");
    printf("-------------------------------------\n");
    printf("Enter the HR Id: ");
    scanf("%d",&temp->id);
    printf("Enter the HR Name: ");
    scanf("%s",temp->name);
    printf("Enter the HR Salary: ");
    scanf("%d",&temp->salary);
    printf("Enter the HR Commission: ");
    scanf("%d",&temp->commission);
    printf("-------------------------------------\n");
}

void display(Hr* h){
    printf("Admin information\n");
    printf("-------------------------------------\n");
    printf("ID : %d\n",h->id);
    printf("Name : %s\n",h->name);
    printf("Salary : %d\n",h->salary);
    printf("Commision : %d\n",h->commission);
    printf("-------------------------------------\n");
}