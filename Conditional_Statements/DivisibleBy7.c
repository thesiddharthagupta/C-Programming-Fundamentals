#include<stdio.h>
int main(){
    int num;
    printf("Enter a number to check divisible: ");
    scanf("%d",&num);
    if (num % 7 == 0){
        printf("Divisible by 7");
    } else {
        printf("Cannot divisible by 7");
    }
    return 0;
}