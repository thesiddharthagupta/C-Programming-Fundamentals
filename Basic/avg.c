#include<stdio.h>
int main(){
    float a,b,c, average;
    printf("Enter 3 numbers: ");
    scanf("%f %f %f",&a,&b,&c);

    average = (a+b+c)/3;
    printf("The average of 3 numbers are: %.2f",average);
    return 0;
}