// Sort the array.


#include <stdio.h>

void sortArray(int arr[],int size, int x,int y){
int temp;


    x = x-1;
    y = y-1;
    
        temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
}

void main() {
    int n, i;
    int x,y;

    printf("Enter the size of arr[]: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of arr[]:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the X index:");
    scanf("%d",&x);

    printf("Enter the Y index:");
    scanf("%d",&y);

    
    sortArray(arr,n,x,y);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

