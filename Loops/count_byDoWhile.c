#include<stdio.h>

int main(){
    int num;
    int count = 0;

    printf("Enter number: ");
    scanf("%d",&num);

    do{
        num = num / 10;
        count++;
    }
    while (num != 0);

    printf("Total digits = %d\n", count);

    return 0;
}