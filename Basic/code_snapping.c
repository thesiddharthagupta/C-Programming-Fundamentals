#include<stdio.h>

int a = 10;     // Global variable

void m()
{
    int a = 5;  // Local variable
    a++;        // Increment local variable
    printf("%d", a);
}

int main()
{
    m();
    printf("%d", a);
    return 0;
}