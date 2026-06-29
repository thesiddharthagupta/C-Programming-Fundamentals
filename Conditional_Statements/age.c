#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your age: ");
    scanf("%d", &age);      // integer value
    
    if (age>=18){
        printf("You are Elligible to vote!");
    }
    else{
        printf("You are not Elligible to Vote!");
    }

    return 0;
}