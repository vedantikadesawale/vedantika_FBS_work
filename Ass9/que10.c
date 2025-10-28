// Sort the array.

#include <stdio.h>

void sortArr(int brr[],int a){

    int temp;
    int i,j;
    for (i = 0; i < a - 1; i++) {
        for (j = i + 1; j < a; j++) {
            if (brr[i] > brr[j]) {
                temp = brr[i];
                brr[i] = brr[j];
                brr[j] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < a; i++) {
        printf("%d ", brr[i]);
    }
}

void main() {
    int n, i, j, temp;

    printf("Enter the size of arr[]: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of arr[]:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sortArr(arr,n);
    
}
