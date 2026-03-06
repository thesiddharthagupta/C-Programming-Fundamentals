#include<stdio.h>
int main(){
    int num;
    printf("Enter number to know Multiple of 5 ? > ");
    scanf("%d",&num);

    if (num % 5 == 0){
        printf("Multiple of 5");
    }
    else {
        printf("Not multiple of 5");
    }
        return 0;
}