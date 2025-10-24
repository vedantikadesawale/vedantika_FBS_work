#include<stdio.h>

int marks(int x);

int marks(int x){ 
   
    if(x > 75){
        return 1;
    }else if(x > 65 && x < 75){
        return 2;
    }else if(x > 55 && x < 65){
        return 3;
     }else if(x > 40 && x < 55 ){
        return 4;
    } else {
        return 5;
    }
}

void main(){
  
    int num;

    printf("Enter the marks:");
    scanf("%d", &num);
    
    int res = marks(num);
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
