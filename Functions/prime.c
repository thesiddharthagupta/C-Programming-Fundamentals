#include<stdio.h>

int isprime(int num){
    int count = 0;

    for(int i = 1; i <= num; i++){
        if (num % i == 0){
            count++;
        }
    }

    if (count == 2)     // condition 
        return 1;
    else
        return 0;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(isprime(num)){
        printf("%d is Prime Number!", num);
    } else {
        printf("%d is Not a Prime Number!", num);
    }

    return 0;
}