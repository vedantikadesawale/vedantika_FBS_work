#include <stdio.h>

int isPalindrome(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        if (arr[start] != arr[end])
            return 0;   

        start++;
        end--;
    }

    return 1;   
}

void main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if (isPalindrome(arr, n))
        printf("\nArray is Palindrome\n");
    else
        printf("\nArray is not Palindrome\n");

}
