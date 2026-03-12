#include<stdio.h>
void main(){
    int x=1;
    if (x--)
    printf("Hi");
    else {
        printf("Bye");
    }
}   // prints hi

/*-
 x-- returns the old value of x before decrementing.
- If you had written --x instead, it would decrement first and then check the new value. In that case, --x would be 0, which is false, and the program would print:
*/