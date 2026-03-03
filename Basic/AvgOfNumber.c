#include<stdio.h>
int main(){
    int a,b,c;
    float avg;

    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    avg = (a + b + c) / 3.0;   // 3.0 for correct float division

    printf("The average of %d, %d and %d is: %.2f", a, b, c, avg);

    return 0;
}