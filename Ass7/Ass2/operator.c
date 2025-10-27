#include <stdio.h>

int operate(int *x, int *y, char *a);

int operate(int *x, int *y, char *a){
   
     if (*a == '+') {
        printf("Result: %d\n", *x + *y);
    }
    else if (*a == '-') {
       printf("Result: %d\n", *x - *y);  
    }
    else if (*a == '*') {
      printf("Result: %d\n", *x * *y);  
    }
    else if (*a == '/') {
        printf("Result: %d\n", *x / *y);
    }
    else  {
        printf("Result: %d\n", *x % *y);
    }

 
}
void main() {

    int num1, num2;
    char op;

    printf("Enter the 1st numbers:");
    scanf("%d",&num1);

    printf("Enter the 2nd numbers:");
    scanf("%d",&num2);

    printf("Enter the operator:");
    scanf(" %c", &op);

    operate(&num1, &num2, &op);

}

