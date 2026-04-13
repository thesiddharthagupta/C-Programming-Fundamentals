#include<stdio.h>

int divisible(int a, int b){
    return a % b == 0;
}

int main(){
    int a= 5, b=7;

    if (divisible(a,b)){
        printf("multiple");
    } else {
        printf("Not multiple");
    }
    return 0;
}