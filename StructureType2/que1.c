#include<stdio.h>
#include<string.h>

typedef struct Student{
    int rollNo;
    char name[20];
    int marks;
}Student;

Student storeStudent();
void display(Student);

void main(){

    Student s1, s2;

    s1 = storeStudent();
    s2 = storeStudent();

    display(s1);
    display(s2);

}

Student storeStudent(){
    Student temp;

    printf("Enter Student information\n");
    printf("-------------------------------------\n");
    printf("Enter the student RollNo: ");
    scanf("%d",&temp.rollNo);
    printf("Enter the student Name: ");
    scanf("%s",temp.name);
    printf("Enter the student Marks: ");
    scanf("%d",&temp.marks);
    printf("-------------------------------------\n");

    return temp;
}

void display(Student stud){

    printf("Student information\n");
    printf("-------------------------------------\n");
    printf("Roll No.: %d\n",stud.rollNo);
    printf("Name : %s\n",stud.name);
    printf("Marks : %d\n",stud.marks);
    printf("-------------------------------------\n");

}