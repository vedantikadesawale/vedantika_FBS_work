#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "abcdef";
    printf("Length: %d", strspn(str, "abc"));
}