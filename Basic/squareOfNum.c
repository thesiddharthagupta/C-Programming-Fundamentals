#include<stdio.h>
// #include<math.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    a = a*a;    //pow(a,2) by math.h
    printf("Square of the number is: %d\n",a);
    return 0;
}