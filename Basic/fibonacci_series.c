#include<stdio.h>
int main(){
    int i = 1, num, first = 0,secound = 1, next;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Fibonacci Series\n");
    while (i<=num){
        printf("%d\t", first);
        next = first + secound;
        first = secound;
        secound = next;
        i++;
    }
    return 0;
}