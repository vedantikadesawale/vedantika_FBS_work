// Merge two arrays

#include <stdio.h>
#include<stdlib.h>

void main() {
    int s1, s2;

    printf("Enter the size of first array: ");
    scanf("%d", &s1);

    printf("Enter the size of second array: ");
    scanf("%d", &s2);

    // int arr[s1], brr[s2], crr[s1 + s2];
    int *arr = (int *)malloc(sizeof(int)* s1);

    int *brr= (int *)malloc(sizeof(int)* s2);

    int *crr= (int *)malloc(sizeof(int)*( s1 + s2));


    printf("Enter elements of first array:\n");
    for (int i = 0; i < s1; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter elements of second array:\n");
    for (int i = 0; i < s2; i++) {
        scanf("%d", &brr[i]);
    }

    for (int i = 0; i < s1; i++) {
        crr[i] = arr[i];
    }

    for (int i = 0; i < s2; i++) {
        crr[s1 + i] = brr[i];
    }

    printf("Merged array:\n");
    for (int i = 0; i < s1 + s2; i++) {
        printf("%d ", crr[i]);
    }

    free(arr);
}
