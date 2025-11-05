// Find minimum and maximum number in array.

#include<stdio.h>
#include <stdlib.h>

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
    int MAX = arr[0];
    int MIN = arr[0];   

for(int i=0; i<s1; i++){
    if(MAX < arr[i]){
        MAX = arr[i];
    }
   
}
for(int i=0; i<s1; i++){
    if(MIN > arr[i]){
        MIN = arr[i];
    } 
}
printf("Max number is :%d\n",MAX);
printf("Min number is :%d",MIN);


free(arr);

}