#include<stdio.h>
#include<string.h>

struct SalesManager{
    int id;
    char name[20];
    int salary;
    int incentive;
    int target;

};

void main(){

    struct SalesManager s1, s2;

    s1.id = 101;
    strcpy(s1.name, "Vedantika");
    s1.salary = 950000;
    s1.incentive = 10000;
    s1.target = 23;


    printf("-------------------------------------\n");
    printf("SalesManager 1 information\n");
    printf("-------------------------------------\n");
    printf("Id = %d\n",s1.id);
    printf("Name = %s\n",s1.name);
    printf("Salary = %d\n",s1.salary);
    printf("Incentive = %d\n",s1.incentive);
    printf("Target = %d\n",s1.target);
    printf("-------------------------------------\n");

    printf("SalesManager 2 information\n");
    printf("-------------------------------------\n");
    printf("Enter the SalesManager 2 Id: ");
    scanf("%d",&s2.id);
    printf("Enter the SalesManager 2 Name: ");
    scanf("%s",&s2.name);
    printf("Enter the SalesManager 2 Salary: ");
    scanf("%d",&s2.salary);
    printf("Enter the SalesManager 2 Incentive: ");
    scanf("%d",&s2.incentive);
    printf("Enter the SalesManager 2 Target: ");
    scanf("%d",&s2.target);
    printf("-------------------------------------\n");

}