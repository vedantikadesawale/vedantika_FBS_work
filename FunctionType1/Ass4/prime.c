#include <stdio.h>

void prime();

void prime(){
int n = 50;    
    int i, j, flag;

    printf("Prime numbers:\n");

    for(i = 2; i <= n; i++) {      
        flag = 0;                  

        for(j = 2; j <= i / 2; j++) {  
            if(i % j == 0) {
                flag = 1;          
                break;
            }
        }

        if(flag == 0) {            
            printf("%d ", i);
        }
    }

}

void main() {
     prime();
}
