#include<stdio.h>

int sumN(int n){
    return n*(n+1)/2;
}

int main(){
    int num;
    printf("Enter number to Sum: ");
    scanf("%d",&num);

    printf("Sum of %d number are %d :",num,sumN(num));

    return 0;
}