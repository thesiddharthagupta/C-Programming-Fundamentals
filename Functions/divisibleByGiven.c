#include<stdio.h>

int check_Divisible(int a, int b){
    return (a % b == 0);
}

int main(){
    int num, div;

    printf("Enter a number for Divide: ");
    scanf("%d", &num);

    printf("Enter a number to get divide: ");
    scanf("%d", &div);

    if (div == 0) {
        printf("Cannot divide by zero!");
        return 0;
    }

    if (check_Divisible(num, div)) {
        printf("Divisible by given number");
    } else {
        printf("Not divisible by given number");
    }

    return 0;
}