#include <stdio.h>
#include <string.h>
#include <errno.h>

void main() {
    printf("Error 2: %s", strerror(2));
    // printf("Error 3: %s", strerror(3));
}