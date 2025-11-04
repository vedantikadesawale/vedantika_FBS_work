#include <stdio.h>
#include <string.h>

void main() {
    char buffer[100];
    sprintf(buffer, "Sum of %d and %d is %d", 5, 10, 15);
    printf("%s", buffer);
}