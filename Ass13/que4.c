//Find odd and even among the numbers.

#include<stdio.h>
#include<stdlib.h>

void main(){
    int s1;
    printf("Enter the size of arr[]: ");
    scanf("%d",&s1);

    // int arr[s1];
    int *arr = (int *)malloc(sizeof(int)* s1);

     
printf("Enter the elements of arr[]:\n");

for(int i=0; i<s1; i++){
    scanf("%d",&arr[i]);
}

printf("\nEven numbers: ");
for(int i=0; i<s1; i++){
    if(arr[i]%2 ==0){
        printf("%d ",arr[i]);
    } 
}

printf("\nOdd numbers: ");
for(int i=0; i<s1; i++){
    if(arr[i]%2 != 0){
        printf("%d ",arr[i]);
    } 
}

free(arr);
}