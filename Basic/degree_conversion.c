//Write a program to convert Celsius to Fahrenheit.
#include<stdio.h>
int main(){
    float Fahrenheit, celsius;

    printf("enter the tempr into farhenheit to convert it into celsius : ");

    scanf("%f",&Fahrenheit);

    celsius = (Fahrenheit - 32) * 0.55;

    printf("celsius is: %f",celsius);
    
    return 0;
}