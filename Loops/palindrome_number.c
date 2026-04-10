#include<stdio.h>
int main(){
    int num, temp, rev=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    temp = num;
    while(num>0){
        // num % 10;
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    if (temp == rev){
        printf("palindrome");
    } else {
        printf("Not palindrome");
    }
    return 0;
}