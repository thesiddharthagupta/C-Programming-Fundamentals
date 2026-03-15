#include<stdio.h>

int main(){
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num == 0){
        count = 1;
    }
    else{
        if(num < 0){    // while(num != 0)
            num = -num;   // convert negative to positive
        }

        while(num > 0){
            num = num / 10;
            count++;
        }
    }

    printf("Total digits = %d", count);

    return 0;
}