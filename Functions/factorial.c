#include<stdio.h>

int fact(int n){
    int i, fact = 1;

    for(i = 1; i <= n; i++){
        fact = fact * i;
    }

    return fact;
}

int main(){
    printf("Factorial = %d", fact(4));
    return 0;
}