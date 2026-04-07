#include <stdio.h>

void swap(int *a, int *b) {   // pointers
    int temp;
    temp = *a;   // save value at a
    *a = *b;     // put b's value into a
    *b = temp;   // put saved value into b
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: %d and %d\n", a, b);

    swap(&a, &b);   // pass addresses, not values

    printf("After swap: %d and %d\n", a, b);

    return 0;
}