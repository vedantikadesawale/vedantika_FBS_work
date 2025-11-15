#include<stdio.h>

void marks(int x);

void marks(int x){ 
   
    if(x > 75){
         printf("Distinction\n");
    }else if(x > 65 && x < 75){
        printf("First Class\n");
    }else if(x > 55 && x < 65){
        printf("Second Class\n");
     }else if(x > 40 && x < 55 ){
        printf("Pass Class\n");
    } else {
        printf("Fail\n");
    }
}

void main(){
  
    int num;

    printf("Enter the marks:");
    scanf("%d", &num);
    
    marks(num);
    
}

