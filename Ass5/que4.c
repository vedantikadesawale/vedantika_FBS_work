#include<stdio.h>
void main(){
    int n = 5;
    int i,j,k;

    for(i=n; i>=1; i--){
        for(k=1;k<=i;k++){
        printf(" ");
        }
        for(j=1;j<=6-i;j++){
            printf("* ");
        }
        printf("\n");
    }
}

