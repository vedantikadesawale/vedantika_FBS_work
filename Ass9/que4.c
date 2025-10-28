//Find odd and even among the numbers.

#include<stdio.h>

void evenOdd(int brr[],int n){
    
printf("\nEven numbers: ");
for(int i=0; i<n; i++){
    if(brr[i]%2 ==0){
        printf("%d ",brr[i]);
    } 
}

printf("\nOdd numbers: ");
for(int i=0; i<n; i++){
    if(brr[i]%2 != 0){
        printf("%d ",brr[i]);
    } 
}
}

void main(){
    int s1;
    printf("Enter the size of arr[]: ");
    scanf("%d",&s1);

    int arr[s1];
     
printf("Enter the elements of arr[]:\n");

for(int i=0; i<s1; i++){
    scanf("%d",&arr[i]);
}

evenOdd(arr,s1);

}