#include<stdio.h>

int main(){
    char ch[] = "Siddhartha";
    int i;

    // find length
    for(i = 0; ch[i] != '\0'; i++);

    // print in reverse
    for(i = i - 1; i >= 0; i--){
        printf("%c\n", ch[i]);
    }

    return 0;
}