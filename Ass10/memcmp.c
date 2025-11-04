#include <stdio.h>
#include <string.h>

void main() {
    char a[] = "abc";
    char b[] = "abf";
    printf("Result: %d", memcmp(a, b, 3));
}