#include<stdio.h>
int main(){
    int num, temp, digit;
    printf("Enter a number to check the value is Palindrome or not? ");
    scanf("%d",&num);

    int reverse = 0;
    temp = num;

    // logic
    while(num > 0){
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
     
    if (reverse == temp)
        printf("Palindrome");
    else{
        printf("Not palindrome");
    }
    return 0;
}