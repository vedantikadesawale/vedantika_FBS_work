#include <stdio.h>

int operate();

int operate(){
    int num1, num2;
    char op;
    int result;

    printf("Enter the 2 numbers:");
    scanf("%d %d",&num1, &num2);

    printf("Enter the operator:");
    scanf(" %c", &op);

    if (op == '+') {
        result = num1 + num2;
    }
    else if (op == '-') {
        result = num1 - num2;    
    }
    else if (op == '*') {
        result = num1 * num2;    
    }
    else if (op == '/') {
        result = num1 / num2;    
    }
    else  {
        result = num1 % num2;    
    }

    return result;
}
void main() {
    int res = operate();
    printf("Result is %d:",res);

}

