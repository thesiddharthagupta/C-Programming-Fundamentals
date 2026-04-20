#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    printf("The cube of the number is: %d\n", a*a*a);  // pow(a,3) with math.h -> headerFile
    return 0;
}