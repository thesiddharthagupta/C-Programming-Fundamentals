#include <stdio.h>

int main() {
    int num, rev = 0, rem, temp;

    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;  // save original

    while (num != 0) {
        rem = num % 10;          // take last digit
        rev = rev * 10 + rem;    // build reverse
        num = num / 10;          // remove last digit
    }

    if (temp == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}