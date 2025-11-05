#include <stdio.h>

void main() {
    char str[100];
    int i;
    int n;


    printf("Enter a string: ");
    scanf("%s", str);   

    printf("Enter a index to remove character: ");
    scanf(" %d", &n);  

    for(i = n; str[i] != '\0'; i++) {
        str[i] = str[i+1];
    }

    printf("String is:%s\n",str);
    
}
