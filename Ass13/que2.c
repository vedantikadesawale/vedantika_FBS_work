// Search the given number in array.

#include<stdio.h>
#include <stdlib.h>

void main(){
// int arr[5];

 int *arr = (int *)malloc(sizeof(int)* 5);


printf("Enter the elements:");

for(int i=0; i<5; i++){
    scanf("%d",&arr[i]);
}

for(int i=0; i<5;i++){
    printf("%d ",arr[i]);
}

int num;
int flag = 0,index;
//int index = -1;
printf("\nEnter the number to search:");
scanf("%d",&num);

for(int i=0;i<5;i++){
    if(num == arr[i]){
        flag = 1;
        index = i;
        break;
    }
}
if(flag == 1)//if(index == -1)
{
printf("Found at %d index",index);
}else{
    printf("Not found");
}
free(arr);
}