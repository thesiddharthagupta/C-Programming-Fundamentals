#include<stdio.h>
int main(){
    char ch;
    printf("Enter a charactor: ");
    scanf("%c",&ch);

    if (ch >= 'a' && ch <= 'z'){
        printf("Lower case");
    }  
     else if (ch >= 'A' && ch <= 'Z')
    {
        printf("Upper Case");
    } else
     {
        printf("Not a English latter!");
    }
}