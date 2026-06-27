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
    m();    // prints 6
    printf("%d", a);        // prints 10
    return 0;
}

// output -> 610