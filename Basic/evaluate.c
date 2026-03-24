// Write a program to evaluate the expression: a + b * c - d / e.

#include<stdio.h>
int main(){
    int a, b, c, d, e;
    float calculate;
    printf("Enter the value for (a + b * c - d / e)\n:");

    printf("ENter the value for a:");
    scanf("%d",&a);

    printf("ENter the value for b:");
    scanf("%d",&b);

    printf("ENter the value for c:");
    scanf("%d",&c);

    printf("ENter the value for d:");
    scanf("%d",&d);

    printf("ENter the value for e:");
    scanf("%d",&e);

    calculate = a + b * c - d / e;
    
    printf("the value is:%f", calculate);
    return 0;

}