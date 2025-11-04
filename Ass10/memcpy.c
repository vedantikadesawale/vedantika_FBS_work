#include <stdio.h>
#include <string.h>

void main() {
    char src[] = "Memory";
    char dest[20];
    memcpy(dest, src, strlen(src) + 1);
    printf("Copied: %s", dest);
}