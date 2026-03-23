#include<stdio.h>
int main(){
    int num, temp, reverse = 0, digit;
    printf("Enter a number to check the value is Palindrome or not? ");
    scanf("%d",&num);

    temp = num;

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