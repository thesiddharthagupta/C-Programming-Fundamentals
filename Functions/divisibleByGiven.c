#include<stdio.h>

int check_Divisible(int a, int b){
    return (a % b == 0);
}

int main(){
    int num, div;

    printf("Enter the number to be checked: ");
    scanf("%d", &num);

    printf("Enter the divisor: ");
    scanf("%d", &div);

    if (div == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }

    if (check_Divisible(num, div)) {
        printf("%d is divisible by %d.\n", num, div);
    } else {
        printf("%d is not divisible by %d.\n", num, div);
    }

    return 0;
}