#include <stdio.h>

int age(int x);

int age(int x){

    if (x < 12) {
        return 1;  
      }
    else if (x >= 12 && x <= 19) {
        return 2;
        }
    else if (x >= 20 && x <= 59) {
        return 3;
    }
    else  {
       return 4;
    }
}
void main() {
    int num;
    printf("Enter the age:");
    scanf("%d", &num);

    int res = age(num);
     if (res == 1)
        printf("Child\n");
    else if (res == 2)
        printf("Teenager\n");
    else if (res == 3)
        printf("Adult\n");
    else
        printf("Senior\n");

}
