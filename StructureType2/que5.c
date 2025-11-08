#include<stdio.h>
#include<string.h>

struct SalesManager{
    int id;
    char name[20];
    int salary;
    int incentive;
    int target;

};

struct SalesManager storeSalesManager();
void display(struct SalesManager);

void main(){

    struct SalesManager s1, s2;

    s1 = storeSalesManager();
    s2 = storeSalesManager();

    display(s1);
    display(s2);
}

struct SalesManager storeSalesManager(){

    struct SalesManager temp;

    printf("Enter SalesManager information\n");
    printf("-------------------------------------\n");
    printf("Enter the SalesManager Id: ");
    scanf("%d",&temp.id);
    printf("Enter the SalesManager Name: ");
    scanf("%s",temp.name);
    printf("Enter the SalesManager Salary: ");
    scanf("%d",&temp.salary);
    printf("Enter the SalesManager Incentive: ");
    scanf("%d",&temp.incentive);
    printf("Enter the SalesManager Target: ");
    scanf("%d",&temp.target);
    printf("-------------------------------------\n");

    return temp;
}

void display(struct SalesManager sm){
    printf("SalesManager information\n");
    printf("-------------------------------------\n");
    printf("ID : %d\n",sm.id);
    printf("Name : %s\n",sm.name);
    printf("Salary : %d\n",sm.salary);
    printf("Incentive : %d\n",sm.incentive);
    printf("Target : %d\n",sm.target);
    printf("-------------------------------------\n");

}