#include<stdio.h>

int multi(int a,int b){
    return a * b;
}

int main(){
    int a, b;
    printf("Enter the value of a & b: ");
    scanf("%d%d",&a,&b);

    printf("Multiple of %d and %d is %d\n", a, b, multi (a,b));

    return 0;
}