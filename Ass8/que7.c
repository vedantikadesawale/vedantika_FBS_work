//Take two array and add sum in third array

#include<stdio.h>

void main(){
    int s1;
    printf("Enter the size of arrays: ");
    scanf("%d",&s1);

    int arr[s1];
    int brr[s1];
    int crr[s1];


printf("Enter the elements of arr[]:\n");

for(int i=0; i<s1; i++){
    scanf("%d",&arr[i]);
}

printf("Enter the elements of brr[]:\n");

for(int i=0; i<s1; i++){
    scanf("%d",&brr[i]);
}

// for(int i=0; i<s1;i++){
//     printf("%d ",arr[i]);
// }

// for(int i=0; i<s2;i++){
//     printf("%d ",brr[i]);
// }

// for(int i=0; i<s3;i++){
//     printf("%d ",crr[i]);
// }

for(int i=0; i<s1;i++){
    crr[i] = arr[i] + brr[i];
}
 
printf("Sum of both arrays:\n");
for(int i=0; i<s1;i++){
    printf("%d ",crr[i]);
}
}