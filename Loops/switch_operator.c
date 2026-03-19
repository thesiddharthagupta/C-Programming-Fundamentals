//Write a program to simulate a calculator using switch case (add, sub, mul, div).
#include<stdio.h>
int main(){
    float num1, num2, result;
    char operator;
    printf("Enter an operator(+,-,*,/): ");
    scanf("%c",&operator);
    printf("Enter numbers: ");
    scanf("%f%f",&num1,&num2);

    switch(operator){
    case '+':
            result = num1 + num2;
            printf("Sum = : %.2f\n", result);
            break;
     case '-':
            result = num1 - num2;
            printf("Difference  = : %.2f\n", result);
            break;
    case '*':
            result = num1 * num2;
            printf("multiply = : %.2f\n", result);
            break;
    case '/':
            result = num1 / num2;
            printf("Divide = : %.2f\n", result);
            break;
    
    default :
            printf(" Invalid input");
    }

    return 0;

}