#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("test.txt", "r");

    // if (fptr == NULL) {
    //     printf("File could not be opened.\n");
    //     return 1;
    // }

    int n;

    fscanf(fptr, "%d", &n);
    printf("Number = %d\n", n);

    fscanf(fptr, "%d", &n);
    printf("Number = %d\n", n);

    fclose(fptr);

    return 0;
}