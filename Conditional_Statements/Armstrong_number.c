#include<stdio.h>

int main() {
    int num, a, b, c, sum;

    printf("Enter a 3 digit number: ");
    scanf("%d", &num);

    a = num / 100;        // first digit
    b = (num / 10) % 10;  // second digit
    c = num % 10;         // third digit

    sum = (a*a*a) + (b*b*b) + (c*c*c);

    if(sum == num) {
        printf("It is an Armstrong number");
    }
    else {
        printf("It is not an Armstrong number");
    }

    return 0;
}