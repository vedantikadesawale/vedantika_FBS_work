//Print alternate elements in array.

#include<stdio.h>

void alternateElements(int brr[],int n){

    for(int i=0; i<n;i+= 2){
    printf("%d ",brr[i]);
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
alternateElements(arr,s1);

}