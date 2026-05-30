#include <stdio.h>
int countlength(char arr[]) {
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char str[] = "Hello";

    printf("Length = %d\n", countlength(str));

    return 0;
}