#include <stdio.h>

int operate(int x, int y, char a);

int operate(int x, int y, char a){
    int result;
   
     if (a == '+') {
        result = x + y;
    }
    else if (a == '-') {
        result = x - y;   
    }
    else if (a == '*') {
        result = x * y;   
    }
    else if (a == '/') {
        result = x / y;  
    }
    else  {
        result = x % y;  
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

    int res = operate(num1, num2, op);
    printf("Result is %d:",res);

}

