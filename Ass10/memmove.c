#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "Vedantika";
    memmove(str + 2, str, 6);
    printf("After move: %s", str);
}