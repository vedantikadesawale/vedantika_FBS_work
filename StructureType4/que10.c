#include <stdio.h>
#include <string.h>

typedef struct Product {
    int id;
    char name[20];
    int quantity;
    float price;
}Product;

void storeProduct(Product*);
void display(Product*);

void main() {
    Product p1, p2;

    storeProduct(&p1);
    storeProduct(&p2);

    display(&p1);
    display(&p2);
}

void storeProduct(Product* temp) {

    printf("Enter Product information\n");
    printf("-------------------------------------\n");
    printf("Enter Product ID: ");
    scanf("%d", &temp->id);

    printf("Enter Product Name: ");
    scanf("%s", temp->name);

    printf("Enter Product Quantity: ");
    scanf("%d", &temp->quantity);

    printf("Enter Product Price: ");
    scanf("%f", &temp->price);
    printf("-------------------------------------\n");
}

void display(Product* p) {

    printf("Product information\n");
    printf("-------------------------------------\n");
    printf("ID = %d\n", p->id);
    printf("Name = %s\n", p->name);
    printf("Quantity = %d\n", p->quantity);
    printf("Price = %.2f\n", p->price);
    printf("-------------------------------------\n");
}
