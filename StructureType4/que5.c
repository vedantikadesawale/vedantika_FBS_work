#include<stdio.h>
#include<string.h>

typedef struct SalesManager{
    int id;
    char name[20];
    int salary;
    int incentive;
    int target;

}SalesManager;

void storeSalesManager(SalesManager*);
void display(SalesManager*);

void main(){

    SalesManager s1, s2;

    storeSalesManager(&s1);
    storeSalesManager(&s2);

    display(&s1);
    display(&s2);
}

void storeSalesManager(SalesManager* temp){

    printf("Enter SalesManager information\n");
    printf("-------------------------------------\n");
    printf("Enter the SalesManager Id: ");
    scanf("%d",&temp->id);
    printf("Enter the SalesManager Name: ");
    scanf("%s",temp->name);
    printf("Enter the SalesManager Salary: ");
    scanf("%d",&temp->salary);
    printf("Enter the SalesManager Incentive: ");
    scanf("%d",&temp->incentive);
    printf("Enter the SalesManager Target: ");
    scanf("%d",&temp->target);
    printf("-------------------------------------\n");
}

void display(SalesManager* sm){
    printf("SalesManager information\n");
    printf("-------------------------------------\n");
    printf("ID : %d\n",sm->id);
    printf("Name : %s\n",sm->name);
    printf("Salary : %d\n",sm->salary);
    printf("Incentive : %d\n",sm->incentive);
    printf("Target : %d\n",sm->target);
    printf("-------------------------------------\n");

}