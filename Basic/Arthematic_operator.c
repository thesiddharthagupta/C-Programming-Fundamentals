#include<stdio.h>
int main(){
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);

    printf("Enter value of b: ");
    scanf("%d",&b);

    printf("The Add of number is: %d\n", a + b);
    printf("The difference of number is: %d\n", a - b);
    printf("The Multiple of number is: %d\n", a * b);

    if(b != 0){
    printf("The Divide of number is: %.2f\n", (float)a / b);
    }       // typecasting ny float and .2f is to print 2 dicimal values.
    else {
    printf("Division by zero is not allowed!\n");
    }

    return 0;
}