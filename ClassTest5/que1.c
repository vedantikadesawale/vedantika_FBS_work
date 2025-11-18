#include <stdio.h>

void main() {
    int s1, s2;

    printf("Enter the size of first array: ");
    scanf("%d", &s1);

    printf("Enter the size of second array: ");
    scanf("%d", &s2);

    int arr[s1], brr[s2];

    printf("Enter elements of first array:\n");
    for (int i = 0; i < s1; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter elements of second array:\n");
    for (int j = 0; j < s2; j++) {
        scanf("%d", &brr[j]);
    }

    printf("Common elements:\n");
   for (int i = 0; i < s1; i++) {
        for (int j = 0; j < s2; j++) {
            if (arr[i] == brr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }

    }
}
