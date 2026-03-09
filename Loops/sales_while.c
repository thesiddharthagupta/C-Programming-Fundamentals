#include<stdio.h>
int main(){
    int n, total = 0, sales;

    printf("Enter number of sales: ");;
    scanf("%d",&n);

    int i = 1;
    while (i<=n)
    {
        printf("Enter Sales: ");
        scanf("%d",&sales);
        total += sales;
        i++;

    }
    printf("Your Total sales is: %d", total);
    
    return 0;
    
}