//Accept array and print only prime numbers of array.

#include<stdio.h>
#include<stdlib.h>

void main(){
    int s1,s2,s3;
    printf("Enter the size of arr[]: ");
    scanf("%d",&s1);

    // int arr[s1];
    int *arr = (int *)malloc(sizeof(int)* s1);



printf("Enter the elements of arr[]:\n");

for(int i=0; i<s1; i++){
    scanf("%d",&arr[i]);
}

printf("Prime numbers in the array:\n");

for(int i=0; i<s1;i++){
    int num = arr[i];
    int isPrime = 1;

    if(num <= 1){
        isPrime = 0;
    }else{
        for(int j = 2; j <= num/2; j++){
            if(num % j ==0){
                isPrime = 0;
                break;
            }
        }
    }
    if(isPrime == 1){
        printf("%d ", num);
    }
}

free(arr);
}