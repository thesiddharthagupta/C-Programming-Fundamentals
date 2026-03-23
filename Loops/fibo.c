#include<stdio.h>

int main(){
    int a = 0, b = 1, c;
    int limit;

    printf("Enter limit: ");
    scanf("%d", &limit);

    // check for negative input
    if(limit < 0){
        printf("Invalid input! Please enter a non-negative number.\n");
        return 0;
    }

    printf("Fibonacci series: ");

    do{
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    while(a <= limit);

    return 0;
}