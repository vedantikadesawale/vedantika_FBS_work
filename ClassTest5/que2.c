#include <stdio.h>

void main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max1 = arr[0];
    int max2 = arr[1];

    if (max2 > max1) {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    printf("First Maximum = %d\n", max1);
    printf("Second Maximum = %d\n", max2);
}
