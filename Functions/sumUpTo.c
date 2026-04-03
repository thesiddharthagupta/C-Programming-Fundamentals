#include<stdio.h>

int sumUpTo(int n){
    int sum = 0;
    for (int i = 1; i<=n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    int result = sumUpTo(num);   // call the function
    printf("Sum from 1 to %d = %d", num, result);

    return 0;
}