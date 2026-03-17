#include<stdio.h>

int main(){
    char ch[100] = "Siddhartha";

    for (int i = 0; ch[i] != '\0'; i++)     //'\0' = null character
    {
        printf("%c\n", ch[i]);
    }

    return 0;
}