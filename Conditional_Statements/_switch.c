#include<stdio.h>
int main(){
    char a = 'A', b = 'B';      //askii-> // A is 65 && B is 66;
    switch(a+b){                // askii for a is 97 && 'b' is 98;
        case 10: printf("Hi \n");
        break;
        case 30: printf("Hello\n");
        case 60: printf("Welcome\n");
        default : printf("C-programming\n");    // printed bcoz cases didn't matched 

    }
    printf("outside Switch\n");         // outside of cases in body. so its print...
    return 0;
}