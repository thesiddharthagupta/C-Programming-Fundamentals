#include<stdio.h>
int main(){
    int n,sum;
    printf("Enter number to sum: ");
    scanf("%d",&n);

    sum = n*(n+1)/2;
    printf("Sum of first %d numbers is %d", n, sum);
    return 0;
}