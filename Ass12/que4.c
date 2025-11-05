#include <stdio.h>
#include<string.h>

void main() {
    char str[100];
    int len;
    int temp;

    
    printf("Enter a string: ");
    scanf("%s", str);   

    len = strlen(str);
       
       temp = str[0];
       str[0] = str[len- 1];
       str[len- 1] = temp;

    printf("String is: %s",str);

}
