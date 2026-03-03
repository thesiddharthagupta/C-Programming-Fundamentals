#include<stdio.h>
int main(){
    char ch;
    printf("Enter a Character: ");
    scanf(" %c",&ch);

    if (ch >= '0' && ch <= '9'){
        printf("It is a digit.");
    } else{
        printf("It is Not a Digit.");
    }
    return 0;
}