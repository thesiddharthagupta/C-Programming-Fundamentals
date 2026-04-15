#include<stdio.h>
int main(){
    char ch[100];
    int i = 1;
    printf("ENter your name: ");
    scanf("%s",ch);    //char array doesnot required "&"

    do{
        printf("You Entered name is: %s\n",ch);
        i++;  // increment
    } 
    while (i<5);
    return 0;
    }