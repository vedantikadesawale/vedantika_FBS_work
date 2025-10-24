#include <stdio.h>

void factors(int x, int y);

void factors(int x, int y) {
    int i, j;

    for (i = x; i <= y; i++) {
        printf("%d = ", i);
        
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                printf("%d ", j);
            }
        }

        printf("\n");
    }
}

void main() {
    int start, end;

    printf("Enter the start : ");
    scanf("%d", &start);

    printf("Enter the end : ");
    scanf("%d", &end);

    factors(start, end);
}
