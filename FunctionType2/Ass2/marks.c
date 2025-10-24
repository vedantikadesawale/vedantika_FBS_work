#include<stdio.h>

int marks();

int marks(){ 
    
    int marks;

    printf("Enter the marks:");
    scanf("%d", &marks);

    if(marks > 75){
        return 1;
    }else if(marks > 65 && marks < 75){
        return 2;
    }else if(marks > 55 && marks < 65){
        return 3;
     }else if(marks > 40 && marks < 55 ){
        return 4;
    } else {
        return 5;
    }
}

void main(){
   int res = marks();

    if (res == 1)
        printf("Distinction\n");
    else if (res == 2)
        printf("First Class\n");
    else if (res == 3)
        printf("Second Class\n");
    else if(res == 4)
        printf("Pass Class\n");
    else
        printf("Fail\n");
}
