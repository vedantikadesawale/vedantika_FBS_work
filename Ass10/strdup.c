#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main() {
    char str[] = "Veda";
    char *dup = strdup(str);
    printf("Duplicate String: %s", dup);
}