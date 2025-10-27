//Reverse the given array.

#include<stdio.h>

void main(){
    int n;
    printf("Enter the size of arr[]: ");
    scanf("%d",&n);

    int arr[n];


printf("Enter the elements of arr[]:\n");

for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
}

printf("Reverse Array:\n");

for(int i=n-1; i>=0;i--){
    printf("%d ",arr[i]);
}

}