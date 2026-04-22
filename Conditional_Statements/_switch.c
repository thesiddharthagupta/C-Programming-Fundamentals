#include<stdio.h>
int main(){
    char a = 'A', b = 'B';  // A is 65 & B is 66
    switch(a+b){
        case 10: printf("Hi \n");
        break;
        case 30: printf("Hello\n");
        case 60: printf("Welcome\n");
        default : printf("C-programming\n");

    }
    printf("outside Switch\n");
    return 0;
}