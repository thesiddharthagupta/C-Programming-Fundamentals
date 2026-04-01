#include<stdio.h>

int main(){
    int num,div;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Enter a number to be check divisible: ");
    scanf("%d",&div);
    if (num % div == 0){
        printf("Divisible by entered number");
    } else{
        printf("Not divisible by entered number");
    }
    return 0;
}