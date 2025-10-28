// Search the given number in array.

#include<stdio.h>

void searchElement(int brr[],int a){

int flag = 0,index;

for(int i=0;i<5;i++){
    if(a == brr[i]){
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

}

void main(){
int arr[5];

printf("Enter the elements:");

for(int i=0; i<5; i++){
    scanf("%d",&arr[i]);
}

printf("Array is:");
for(int i=0; i<5;i++){
    printf("%d ",arr[i]);
}

int num;
//int index = -1;
printf("\nEnter the number to search:");
scanf("%d",&num);

searchElement(arr,num);

}