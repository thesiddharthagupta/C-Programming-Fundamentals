#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    switch (num%2){
        case 0: printf("The number is Even");
        break;
        case 1: printf("The number is Odd");
        break;
        default : printf("Invalid input");
    } 
    return 0;
}