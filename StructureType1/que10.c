#include<stdio.h>
#include<string.h>

struct Product{
    int id;
    char name[20];
    int quantity;
    float price;

};

void main(){

    struct Product p1, p2;

    p1.id = 101;
    strcpy(p1.name, "Table");
    p1.quantity = 50;
    p1.price = 100000.0;


    printf("-------------------------------------\n");
    printf("Product 1 information\n");
    printf("-------------------------------------\n");
    printf("Id = %d\n",p1.id);
    printf("Name = %s\n",p1.name);
    printf("Quantity = %d\n",p1.quantity);
    printf("Price = %.2f\n",p1.price);
    printf("-------------------------------------\n");

    printf("Product 2 information\n");
    printf("-------------------------------------\n");
    printf("Enter the Product 2 Id: ");
    scanf("%d",&p2.id);
    printf("Enter the Product 2 Name: ");
    scanf("%s",&p2.name);
    printf("Enter the Product 2 Quantity: ");
    scanf("%d",&p2.quantity);
    printf("Enter the Product 2 Price: ");
    scanf("%.2f",&p2.price);
    printf("-------------------------------------\n");

}