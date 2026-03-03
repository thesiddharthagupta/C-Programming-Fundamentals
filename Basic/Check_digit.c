#include<stdio.h>
int main(){
    char ch;
    printf("Enter a Character: ");
    scanf(" %c",&ch);

    // Using ASCII value
    if (ch >= '0' && ch <= '9'){
        printf("It is a digit.");
    } else{
        printf("It is Not a Digit.");
        printf("It is Not Single Digit number or May be charactor")
    }
    return 0;
}

/* // by isdigit function

if(isdigit(ch)) {
        printf("It is a digit.");
    } else {
        printf("It is not a digit.");
        
*/