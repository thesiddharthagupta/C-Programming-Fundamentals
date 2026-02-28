#include<stdio.h>

int main(){
    char a, b;

    printf("Enter 1st: ");
    scanf(" %c", &a);   // notice space before %c

    printf("Enter 2nd: ");
    scanf(" %c", &b);

    printf("The char of 1st is %c\n", a);
    printf("The char of 2nd is %c\n", b);

    return 0;
}