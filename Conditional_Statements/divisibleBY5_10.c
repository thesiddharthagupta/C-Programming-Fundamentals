#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num % 5 == 0 && num % 10 == 0){
        printf("Can be Divisible by 5 and 10");
    }
    else {
        printf("cannNot be divisible by 5 and 10");
    }
    return 0;
}