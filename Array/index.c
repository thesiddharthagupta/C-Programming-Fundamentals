#include<stdio.h>

int main() {
    int card[5];
    int *ptr = &card[0];    //*pre locates &card at index 0  memory location

    // Input values
    for (int i = 0; i < 5; i++) {
        printf("%d index: ", i);
        scanf("%d", (ptr + i));
    }

    // Display values
    for (int i = 0; i < 5; i++) {
        printf("%d index = %d\n", i, card[i]);
    }

    return 0;
}