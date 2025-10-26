#include<stdio.h>

float marks(float v,float w, float x, float y, float z);

float marks(float v,float w, float x, float y, float z){
   

    float totalMarks, percentage;

    totalMarks = v + w + x + y + z;

    percentage = (totalMarks / 500) * 100;

    printf("Total Marks are %0.2f\n", totalMarks);

    return percentage;
    
}

void main(){
    float Eng = 80.0;
    float Mar = 75.0;
    float Math = 90.0;
    float Sci = 85.0;
    float His = 70.0;

    float result = marks(Eng,Mar,Math,Sci,His);
    printf("Percentage %0.2f%%", result);
  

}
