#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "HelloWorld";
    printf("Substring found: %s", strstr(str, "World"));
}