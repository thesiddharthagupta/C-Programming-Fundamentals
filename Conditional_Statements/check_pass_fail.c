#include<stdio.h>
int main(){
    int marks;
    printf("Enter Total Marks: ");
    scanf("%d", &marks);

    if (marks > 100 || marks < 0){
        printf("Invalid Marks!");
    } else if (marks >= 30)
    {
        printf("PASS!");
    }
      else
     {
        printf("FAIL!");
    }
    return 0 ;
}