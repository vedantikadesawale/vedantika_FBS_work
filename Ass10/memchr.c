#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "Hello World";
    char ch = 'o';  
    
    char *ptr = memchr(str, ch, 8);

    if (ptr != NULL)
        printf("Character '%c' found at position: %ld\n", ch, ptr - str);
    else
        printf("Character '%c' not found in first 8 bytes.\n", ch);
}
