#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "computer";
    printf("Match found: %s", strpbrk(str, "ut"));
}