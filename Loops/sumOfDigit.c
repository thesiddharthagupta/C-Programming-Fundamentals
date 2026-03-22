#include<stdio.h>
int main(){
    int num;
    int sum = 0;
    int digit;

    printf("Enter Number: ");
    scanf("%d",&num);

    do{
         digit = num % 10;   // get last digit
        sum = sum + digit;  // add to sum
        num = num / 10;     // remove last digit
    }
    while (num != 0);
    printf("Sum of Digit = %d\n",sum);
    
    return 0;
}