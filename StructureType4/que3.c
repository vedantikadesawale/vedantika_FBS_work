#include<stdio.h>
#include<string.h>

typedef struct Admin{
    int id;
    char name[20];
    int salary;
    int allowance;

}Admin;

void storeAdmin(Admin*);
void display(Admin*);

void main(){

    Admin a1, a2;

    storeAdmin(&a1);
    storeAdmin(&a2);

    display(&a1);
    display(&a2);
}

void storeAdmin(Admin* temp){

    printf("Enter Admin information\n");
    printf("-------------------------------------\n");
    printf("Enter the Admin Id: ");
    scanf("%d",&temp->id);
    printf("Enter the Admin Name: ");
    scanf("%s",temp->name);
    printf("Enter the Admin Salary: ");
    scanf("%d",&temp->salary);
    printf("Enter the Admin Allowance: ");
    scanf("%d",&temp->allowance);
    printf("-------------------------------------\n");

}

void display(Admin* ad){
    printf("Admin information\n");
    printf("-------------------------------------\n");
    printf("ID : %d\n",ad->id);
    printf("Name : %s\n",ad->name);
    printf("Salary : %d\n",ad->salary);
    printf("Allowance : %d\n",ad->allowance);
    printf("-------------------------------------\n");
}