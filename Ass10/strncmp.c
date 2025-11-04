#include <stdio.h>
#include <string.h>

void main() {
    char a[] = "Hello";
    char b[] = "Helium";
    printf("Result: %d", strncmp(a, b, 3));
}