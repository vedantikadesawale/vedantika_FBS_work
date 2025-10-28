// Merge two arrays

#include <stdio.h>

void mergeArr(int prr[],int qrr[],int a,int b){

    int crr[a + b];

    for (int i = 0; i < a; i++) {
        crr[i] = prr[i];
    }

    for (int i = 0; i < b; i++) {
        crr[a + i] = qrr[i];
    }

    printf("Merged array:\n");
    for (int i = 0; i < a + b; i++) {
        printf("%d ", crr[i]);
    }
}
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
    for (int i = 0; i < s2; i++) {
        scanf("%d", &brr[i]);
    }

    mergeArr(arr,brr,s1,s2);
}
