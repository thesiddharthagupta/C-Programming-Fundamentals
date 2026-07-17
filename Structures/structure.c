#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;       // decleration 
    float Cgpa;
};

int main(){
    struct student s1;
    s1.roll = 1664;
    s1.Cgpa = 9.2;
    strcpy(s1.name, "Siddhartha");

    printf("Student name = %s\n", s1.name);
    printf("Student rollNo. = %d\n", s1.roll);
    printf("Student Cgpa = %f\n", s1.Cgpa);
    
    return 0;
}


