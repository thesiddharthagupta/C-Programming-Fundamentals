#include <stdio.h>

int main() {
    int rev = 0, num, original, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // store original number

    while (num > 0) {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num = num / 10;
    }

    if (rev == original) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }

    return 0;
}