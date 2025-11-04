#include <stdio.h>
#include <string.h>

void main() {
    char src[] = "OpenAI";
    char dest[10];
    strncpy(dest, src, 4);
    dest[4] = '\0';
    printf("Copied String: %s", dest);
}