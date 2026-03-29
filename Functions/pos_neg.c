#include<stdio.h>

void check_num(int num){
    if (num>0){
        printf("Positive");
    } else if (num == 0) {
        printf("Zero");
    }
    else {
        printf("Negative");
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    check_num(num);
}