//Print alternate elements in array.

#include<stdio.h>

void main(){
    int s1,s2,s3;
    printf("Enter the size of arr[]: ");
    scanf("%d",&s1);

    int arr[s1];


printf("Enter the elements of arr[]:\n");

for(int i=0; i<s1; i++){
    scanf("%d",&arr[i]);
}

for(int i=0; i<s1;i+= 2){
    printf("%d ",arr[i]);
}

}