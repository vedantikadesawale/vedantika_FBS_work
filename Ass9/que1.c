// Find minimum and maximum number in array.

#include<stdio.h>

void MinMax(int brr[],int a){
 
    int MAX = brr[0];
    int MIN = brr[0];   

for(int i=0; i<a; i++){
    if(MAX < brr[i]){
        MAX = brr[i];
    }
   
}
for(int i=0; i<a; i++){
    if(MIN > brr[i]){
        MIN = brr[i];
    } 
}
printf("Max number is :%d\n",MAX);
printf("Min number is :%d",MIN);

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

MinMax(arr,s1);
   
}