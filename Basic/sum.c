#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d", &a);

    printf("Enter 2nd number: ");
    scanf("%d",&b);

    int sum = a + b;
    printf("The sum two number is: %d", sum);   
    //we can also use printf("diff is: %d", a - b);
    return 0;
}