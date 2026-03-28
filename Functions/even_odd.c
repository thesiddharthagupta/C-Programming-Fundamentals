#include<stdio.h>

void check_even(int n){
    (n%2==0)? printf("Even") : printf("Odd");
        
}

int main(){
    int n;
    printf("Enter number to check: ");
    scanf("%d",&n);

    check_even(n);

}