#include<stdio.h>
#include<string.h>

struct Student{
    int rollNo;
    char name[20];
    int marks;
};

void main(){

    struct Student s1, s2, s3;

    s1.rollNo = 101;
    strcpy(s1.name, "Vedantika");
    s1.marks = 95;

    printf("-------------------------------------\n");
    printf("Student 1 information\n");
    printf("-------------------------------------\n");
    printf("RollNo = %d\n",s1.rollNo);
    printf("Name = %s\n",s1.name);
    printf("Marks = %d\n",s1.marks);
    printf("-------------------------------------\n");

    printf("Student 2 information\n");
    printf("-------------------------------------\n");
    printf("Enter the student 2 RollNo: ");
    scanf("%d",&s2.rollNo);
    printf("Enter the student 2 Name: ");
    scanf("%s",&s2.name);
    printf("Enter the student 2 Marks: ");
    scanf("%d",&s2.marks);
    printf("-------------------------------------\n");

    printf("Student 3 information\n");
    printf("-------------------------------------\n");
    printf("Enter the student 3 RollNo: ");
    scanf("%d",&s3.rollNo);
    printf("Enter the student 3 Name: ");
    scanf("%s",&s3.name);
    printf("Enter the student 3 Marks: ");
    scanf("%d",&s3.marks);
    printf("-------------------------------------\n");

}