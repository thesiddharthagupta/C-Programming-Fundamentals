#include<stdio.h>
int main(){
    char ch;
    printf("Enter a charactor to determine Vowel or constant: ");
    scanf("%c",&ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' ||ch == 'O' || ch == 'U'){
        printf("%c is Vowel",ch);
    }else if (ch >= 'A' && ch<='Z' || ch >= 'a' && ch<= 'z'){
        printf("%c is constant.",ch);
    } else {
        printf("%c is not a valid character",ch);
    }
    return 0;
}