#include<stdio.h>
int main(){
    int marks;
    printf("Enter Total marks: ");
    scanf("%d",&marks);

    if (marks < 30){
        printf("grade is 'C'\n");
    } else if (30 <= marks && marks < 70)   // && for true and true -> true else False!
    {
        printf("Grade is 'B'\n");
    } else if (70 <= marks && marks < 90)
    {
        printf("grade is 'A'\n");

    } else if (marks >= 90 && marks <= 100)
    {
        printf("Grade is 'A+'\n");
    } else {
        printf("Invalid Marks!\n");
    }

    return 0;
    
}