#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter two values:");
    scanf("%d%d", &a,&b);
    printf("before swapping:a=%d, b=%d\n", a,b);
    
    temp = a;
    a = b;
    b = temp;  // storing value to temp for swap

    printf("\nAfter swapping a = %d  and b = %d", a, b);

    return 0;
    
}