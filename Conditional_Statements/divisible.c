#include<stdio.h>
int main(){
    int num;
    printf("Enter number to check: ");
    scanf("%d",&num);

    (num%3==0) && (num%5==0)? printf("Can be divisible") : printf("Cannot be divisible");

    return 0;
}