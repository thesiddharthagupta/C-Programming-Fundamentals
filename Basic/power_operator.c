#include<stdio.h>
#include<math.h>
 int main()
{
    int a,b;
    printf("Enter the number for power: ");
    scanf("%d %d",&a,&b);

    printf("The power of given number is: %d", (int)pow(a,b));  //typecasting to integer by int
    return 0;
}