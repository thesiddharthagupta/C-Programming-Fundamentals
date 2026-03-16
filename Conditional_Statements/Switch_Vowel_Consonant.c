#include<stdio.h>

int main(){
    char ch;

    printf("Enter a character: ");
    scanf("%c",&ch);

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
        switch(ch)
        {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                printf("Vowel");
                break;

            default:
                printf("Consonant");
        }
    }
    else{
        printf("Invalid Character");
    }

    return 0;
}