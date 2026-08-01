#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("student.txt","w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter name: ");     
    scanf("%s",&name);          

    printf("Enter age: ");
    scanf("%d",&age);

    printf("Enter Cgpa: ");
    scanf("%f",&cgpa);

    fprintf(fptr, "%s\t%d\t%.2f", name, age, cgpa);
    fclose(fptr);
    return 0;
}


//cvgbhnj