#include<stdio.h>
int main(){
    int a;
    printf("Enter cube area: ");
    scanf("%d",&a);

    printf("The area of cube is: %d", a*a*a);  // pow(a,3) with math.h
    return 0;
}