#include <stdio.h>

// FUNCTION DEFINITION — does the digit-sum job
int sumOfDigits(int n) {       // takes 'n' as input
    int digit, sum = 0;

    while (n > 0) {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    return sum;                // sends the result back
}

// MAIN — just handles input/output
int main() {
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = sumOfDigits(n);   // FUNCTION CALL

    printf("Sum of digits: %d\n", result);
    return 0;
}