#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("odd.txt", "w");

    int n;
    printf("Enter n value: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {       //odd number
            fprintf(fptr, "%d\n", i);
        }
    }

    fclose(fptr);

    printf("Odd numbers written to odd.txt successfully.\n");

    return 0;
}