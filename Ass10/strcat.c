#include <stdio.h>
#include <string.h>

void main() {
    char s1[20] = "Hello ";
    char s2[] = "World";
    strcat(s1, s2);
    printf("Concatenated: %s", s1);
}