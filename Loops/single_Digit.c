#include<stdio.h>
int main(){
    int num, sum;

    printf("Enter a number: ");
    scanf("%d",&num);

    // repeat until number becomes single digit
    while(num >= 10){
        sum = 0;

        // add digits of number
        while(num > 0){
            sum += num % 10;   // get last digit
            num /= 10;         // remove last digit
        }

        num = sum; // replace number with digit sum
    }

    printf("Single digit sum is: %d\n", num);

    return 0;
}