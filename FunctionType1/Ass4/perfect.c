#include <stdio.h>

void perfect();

void perfect(){
    int n = 30;  
    int i = 1, sum;
    int j;
    
    for(i = 1; i <= n; i++){
        j = 1;
        sum = 0;

    while (j < i) {
        if (i % j == 0) {
            sum = sum + j;
              
        }
        j++;
    }

     if (sum == i){
        printf("%d\n", i);
     }
      
    }
}

void main() {
    perfect();
}
