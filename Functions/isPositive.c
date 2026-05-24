#include<stdio.h>

int IsPositive(int num){
    if (num>0){
        return 1;
    } else if (num < 0){
            return -1;
    } else {
        return 0;
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    // we can store IsPositive = result and use result instend of calling same function twise.
    
    if (IsPositive(num) == 1){
        printf("Positive!");
    } else if (IsPositive(num) == -1){
        printf("Negative");
    } else {
        printf("Zero");
    }
    return 0;
}
