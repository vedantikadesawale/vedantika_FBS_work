#include<stdio.h>
void main(){
    int n = 4;
    int i,j;
    int no = 1;

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",no);
            no++;
        }
        printf("\n");
    }
}