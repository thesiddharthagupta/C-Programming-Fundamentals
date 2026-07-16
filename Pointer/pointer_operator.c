#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;     // array name decays to a pointer to arr[0]
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));   // pointer arithmetic instead of arr[i]
    }
    printf("\n");

    return 0;
}