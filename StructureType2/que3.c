#include<stdio.h>
#include<string.h>

struct Admin{
    int id;
    char name[20];
    int salary;
    int allowance;

};

struct Admin storeAdmin();
void display(struct Admin);

void main(){

    struct Admin a1, a2;

    a1 = storeAdmin();
    a2 = storeAdmin();

    display(a1);
    display(a2);
}

struct Admin storeAdmin(){
    struct Admin temp;

    printf("Enter Admin information\n");
    printf("-------------------------------------\n");
    printf("Enter the Admin Id: ");
    scanf("%d",&temp.id);
    printf("Enter the Admin Name: ");
    scanf("%s",temp.name);
    printf("Enter the Admin Salary: ");
    scanf("%d",&temp.salary);
    printf("Enter the Admin Allowance: ");
    scanf("%d",&temp.allowance);
    printf("-------------------------------------\n");

    return temp;

}

void display(struct Admin ad){
    printf("Admin information\n");
    printf("-------------------------------------\n");
    printf("ID : %d\n",ad.id);
    printf("Name : %s\n",ad.name);
    printf("Salary : %d\n",ad.salary);
    printf("Allowance : %d\n",ad.allowance);
    printf("-------------------------------------\n");
}