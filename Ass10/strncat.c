#include <stdio.h>
#include <string.h>

void main() {
    char s1[20] = "Good";
    char s2[] = "Morning";
    strncat(s1, s2, 5);
    printf("Result: %s", s1);
}