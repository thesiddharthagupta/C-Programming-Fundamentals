#include<stdio.h>
int main(){
    int a = 10, b = 3;

    printf("Without casting: %d\n", a / b);
    printf("With casting: %f", (float) a / b);

    return 0;
}