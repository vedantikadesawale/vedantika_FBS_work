#include<stdio.h>

int avg(int v,int w, int x, int y, int z);
 
int avg(int v,int w, int x, int y, int z){

    int avg;

    avg = (v+w+x+y+z)/5;

    printf("Average of the numbers %d",avg);
}

void main(){
    int a = 1, b = 2, c = 3, d = 4, e = 5;
    avg(a,b,c,d,e);
   

}