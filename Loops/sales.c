#include<stdio.h>

int main(){

    int n, total = 0, sales;

    printf("Enter number of sales: ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        printf("Enter sales %d: ", i);
        scanf("%d",&sales);

        total = total + sales;
    }

    printf("Total sales = %d", total);

    return 0;
}