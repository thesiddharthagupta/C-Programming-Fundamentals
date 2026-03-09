#include<stdio.h>
int main(){
    int n,i;
    printf("Enter Number: ");
    scanf("%d",&n);

    i = 1;
    while (i<=10)
    {
        printf("%d X %d = %d\n",n,i, n*i);
        i++;
    }
    return 0;
}