#include<stdio.h>

int isPrime(int num){
    if(num<=1){
        return 0;
    }
    for (int i = 2; i < num; i++){
        if(num % i == 0){
            return 0;
        } 
    }
            return 1;
        
}

int main(){
    int num;
    printf("Enter a number to check prime: ");
    scanf("%d",&num);

    if(isPrime(num)){
        printf("Prime");
    }
    else {
        printf("Composite");
    }

    return 0;
}
