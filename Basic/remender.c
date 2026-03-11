#include<stdio.h>

int main(){
    int a,b,rem;

    printf("Enter Two numbers to take Remainder: ");
    scanf("%d %d",&a,&b);

    rem = a % b;        //% modulus operator works only with integers.

    printf("Remainder of two numbers is %d", rem);

    return 0;
}