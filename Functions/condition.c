#include<stdio.h>

int check_num(int n){
    return (n%2 == 0);
}

int main(){
    int n;
    printf("Enter number to check: ");
    scanf("%d",&n);

    if(check_num(n)){
        printf("The number is Even");

    } else {
        printf("The number is Odd");
    }
    return 0;
}