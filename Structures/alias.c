#include<stdio.h>
#include<string.h>
typedef struct Computerengineeringstudent {
    int roll;
    float Cgpa;
    char name[100];

} coe;
int main(){
    coe s1;
    s1.roll = 1664;
    s1.Cgpa = 9.2;
    strcpy(s1.name, "Sidd");
    printf("Student name is %s\n",s1.name);
    printf("Student Rollno is %d\n",s1.roll);
    printf("Student Cgpa is %f\n",s1.Cgpa);
    return 0;
}