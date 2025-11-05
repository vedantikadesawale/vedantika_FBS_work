//Find sum of all numbers.

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
    int sum = 0;   

for(int i=0; i<s1; i++){
   
    sum = sum + arr[i];
   
}
printf("Sum of all numbers is :%d\n",sum);


free(arr);
}