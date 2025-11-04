#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "abcdefxyz";
    printf("Length: %d", strcspn(str, "xyz"));
}