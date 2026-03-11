#include<stdio.h>
int main()
{
    int num,count = 0;

    printf("Enter Number: ");
    scanf("%d",&num);

    for(int i = 1; i<=10; i++){
        if (num % i == 0){
            count++;
        }
    }
    
    if(count == 2){
        printf("Prime Number!");
    } else {
        printf("Not a Prime Number!");
    }
    return 0;
}